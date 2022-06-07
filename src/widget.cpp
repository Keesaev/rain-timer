#include "widget.h"

#include <QDebug>
#include <QSerialPortInfo>

#include "./ui_widget.h"

Widget::Widget(QWidget* parent) : QWidget(parent), ui(new Ui::Widget) {
  ui->setupUi(this);

  QTime initTime(QTime::currentTime());
  initTime.addSecs(3600);  // + hr
  ui->timeEdit->setTime(initTime);

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
  } else {
    qDebug() << "No ports found";
  }

  if (!m_port.open(QIODevice::ReadWrite)) {
    qDebug() << "Could not open port " << m_port.error()
             << m_port.errorString();
  } else {
    m_handler = new PortHandler(m_port, this);
    connect(this, &Widget::writeToPort, m_handler, &PortHandler::onWrite);
    emit writeToPort(QString::number(QTime::currentTime().hour()) + ":" +
                     QString::number(QTime::currentTime().minute()));
  }
}

void Widget::onSave() {
  qDebug() << "Saving data";

  qDebug() << "Time:\t\t" << ui->timeEdit->time();
  emit writeToPort("time\n" + QString::number(ui->timeEdit->time().hour()) +
                   QString::number(ui->timeEdit->time().minute()));

  qDebug() << "Sound:\t\t" << ui->soundSlider->value();
  emit writeToPort("sound\n" + QString::number(ui->soundSlider->value()));

  if (ui->radioOn->isChecked()) {
    qDebug() << "Pump:\t\ton";
    emit writeToPort("pump\n1");
  } else {
    qDebug() << "Pump:\t\toff";
    emit writeToPort("pump\n0");
  }

  qDebug() << "Brightness:\t\t" << ui->brightnessSlider->value();
  emit writeToPort("brightness\n" +
                   QString::number(ui->brightnessSlider->value()));
}

Widget::~Widget() { delete ui; }
