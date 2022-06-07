#include "wg_water.h"

#include <QDebug>

#include "ui_wg_water.h"

WgWater::WgWater(QWidget *parent) : QWidget(parent), ui(new Ui::WgWater) {
  ui->setupUi(this);
  connect(ui->pbCancel, &QPushButton::pressed, [this]() { this->close(); });
  connect(ui->radioOn, &QRadioButton::clicked, [this](bool checked) {
    ui->spinBox40->setEnabled(checked);
    ui->spinBox41->setEnabled(checked);
  });
  connect(ui->radioOff, &QRadioButton::clicked, [this](bool checked) {
    ui->spinBox40->setEnabled(checked);
    ui->spinBox41->setEnabled(checked);
  });
  connect(ui->pbOk, &QPushButton::pressed, [this]() {
    if (ui->radioOn->isChecked()) {
      // send 'on' and other data
      emit write("40\n" + QString::number(ui->spinBox40->value()) + "\n");
      emit write("41\n" + QString::number(ui->spinBox41->value()) + "\n");
    } else {
      // send off
      ui->spinBox40->setValue(0);
      ui->spinBox41->setValue(0);
      emit write("40\n0\n");
      emit write("41\n0\n");
    }
    this->close();
  });
}

WgWater::~WgWater() { delete ui; }
