#ifndef WG_LIGHT_H
#define WG_LIGHT_H

#include <QWidget>

namespace Ui {
class WgLight;
}

class WgLight : public QWidget {
  Q_OBJECT

 public:
  explicit WgLight(QWidget *parent = nullptr);
  ~WgLight();
 signals:
  void closing();
  void write(QString data);

 private:
  Ui::WgLight *ui;

  void closeEvent(QCloseEvent *event) override {
    emit closing();
    QWidget::closeEvent(event);
  }
};

#endif  // WG_LIGHT_H
