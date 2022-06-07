#include "widget.h"

#include <QDebug>
#include <QSerialPortInfo>

#include "./ui_widget.h"

Widget::Widget(QWidget* parent) : QWidget(parent), ui(new Ui::Widget) {
  ui->setupUi(this);

  m_handler = new PortHandler(m_port, this);

  connect(&m_timer, &QTimer::timeout, this, &Widget::onTimeout);
  connect(ui->btnStop, &QPushButton::pressed, [this]() {
    QByteArray data;
    data += "0\n";
    m_handler->write(data);
  });

  connect(ui->pbSave, &QPushButton::pressed, [this]() {
    int current = QTime::currentTime().msecsSinceStartOfDay() / 1000;
    int planned = ui->timeEdit->time().msecsSinceStartOfDay() / 1000;

    QByteArray data;

    if (planned >= current) {
      data += "2\n" + QString::number(planned - current) + "\n";
    } else {
      data += "2\n" + QString::number(86400 - current + planned) + "\n";
    }
    m_handler->write(data);
  });

  // SOUND WIDGET

  connect(ui->pbSound, &QPushButton::pressed, [this]() {
    m_wgSound.reset(new WgSound);

    connect(m_wgSound.get(), &WgSound::closing, [this]() {
      this->show();
      m_wgSound.reset();
    });
    connect(m_wgSound.get(), &WgSound::write, [this](QString data) {
      QByteArray array;
      array += data;

      m_handler->write(array);
    });

    m_wgSound->show();
    this->hide();
  });

  // WATER WIDGET

  connect(ui->pbWater, &QPushButton::pressed, [this]() {
    m_wgWater.reset(new WgWater);

    connect(m_wgWater.get(), &WgWater::closing, [this]() {
      this->show();
      m_wgWater.reset();
    });

    connect(m_wgWater.get(), &WgWater::write, [this](QString data) {
      QByteArray array;
      array += data;

      m_handler->write(array);
    });

    m_wgWater->show();
    this->hide();
  });

  // LIGHT WIDGET

  connect(ui->pbLight, &QPushButton::pressed, [this]() {
    m_wgLight.reset(new WgLight);

    connect(m_wgLight.get(), &WgLight::closing, [this]() {
      this->show();
      m_wgLight.reset();
    });

    connect(m_wgLight.get(), &WgLight::write, [this](QString data) {
      QByteArray array;
      array += data;

      m_handler->write(array);
    });

    m_wgLight->show();
    this->hide();
  });

  m_timer.setInterval(100);
  m_timer.setSingleShot(true);
  m_timer.start();
}

void Widget::onTimeout() {
  auto ports = QSerialPortInfo::availablePorts();
  qDebug() << "Found " << ports.size() << " available ports";

  for (int i = 0; i < ports.size(); i++) {
    qDebug() << i + 1 << ":\t" << ports[i].productIdentifier() << "\t "
             << ports[i].portName() << "\t " << ports[i].description();
  }

  if (QCoreApplication::arguments().size() > 1) {
    qDebug() << "Using port " << QCoreApplication::arguments()[1];
    m_port.setPortName(QCoreApplication::arguments()[1]);
  } else if (ports.size()) {
    qDebug() << "Fallback to port " << ports[0].portName();
    m_port.setPortName(ports[0].portName());
  }

  if (!m_port.open(QIODevice::ReadWrite)) {
    qDebug() << "Could not open port " << m_port.error()
             << m_port.errorString();
    m_connectWidget.show();
    this->hide();

    m_timer.setInterval(2000);
    m_timer.start();
  } else {
    qDebug() << "Successfully connected to " << m_port.portName();
    m_connectWidget.hide();

    qDebug() << "Sending current time";

    QByteArray data;
    data += "1\n";
    data += QString::number(QTime::currentTime().hour()) + "\n";
    data += QString::number(QTime::currentTime().minute()) + "\n";
    data += QString::number(QTime::currentTime().second()) + "\n";

    m_handler->write(data);

    this->show();
  }
}

Widget::~Widget() { delete ui; }
