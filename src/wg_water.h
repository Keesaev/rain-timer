#ifndef WG_WATER_H
#define WG_WATER_H

#include <QWidget>

namespace Ui {
class WgWater;
}

class WgWater : public QWidget {
  Q_OBJECT

 public:
  explicit WgWater(QWidget *parent = nullptr);
  ~WgWater();
 signals:
  void closing();
  void write(QString data);

 private:
  Ui::WgWater *ui;

  void closeEvent(QCloseEvent *event) override {
    emit closing();
    QWidget::closeEvent(event);
  }
};

#endif  // WG_WATER_H
