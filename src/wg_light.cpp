#include "wg_light.h"

#include <QDebug>

#include "ui_wg_light.h"

WgLight::WgLight(QWidget *parent) : QWidget(parent), ui(new Ui::WgLight) {
  ui->setupUi(this);
  connect(ui->pbCancel, &QPushButton::pressed, [this]() { this->close(); });
  connect(ui->radioOn, &QRadioButton::clicked, [this](bool checked) {
    ui->spinBox->setEnabled(checked);
    ui->horizontalSlider->setEnabled(checked);
  });
  connect(ui->radioOff, &QRadioButton::clicked, [this](bool checked) {
    ui->spinBox->setEnabled(!checked);
    ui->horizontalSlider->setEnabled(!checked);
  });
  connect(ui->pbOk, &QPushButton::pressed, [this]() {
    if (ui->radioOn->isChecked()) {
      // send 'on' and other data
      emit write("30\n" + QString::number(ui->spinBox->value()) + "\n");
      emit write("31\n" + QString::number(ui->horizontalSlider->value()) +
                 "\n");
    } else {
      // send off
      ui->horizontalSlider->setValue(0);
      emit write("31\n0\n");
    }
    this->close();
  });
}

WgLight::~WgLight() { delete ui; }
