#include "wg_sound.h"

#include <QDebug>

#include "ui_wg_sound.h"

WgSound::WgSound(QWidget *parent) : QWidget(parent), ui(new Ui::WgSound) {
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
      emit write("50\n" + QString::number(ui->spinBox->value()) + "\n");
      emit write("51\n" + QString::number(ui->horizontalSlider->value()) +
                 "\n");
    } else {
      // send off
      ui->spinBox->setValue(0);
      ui->horizontalSlider->setValue(0);
      emit write("50\n0\n");
      emit write("51\n0\n");
    }
    this->close();
  });
}

WgSound::~WgSound() { delete ui; }
