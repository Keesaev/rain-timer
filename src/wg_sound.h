#ifndef WG_SOUND_H
#define WG_SOUND_H

#include <QWidget>

namespace Ui {
class WgSound;
}

class WgSound : public QWidget {
  Q_OBJECT

 public:
  explicit WgSound(QWidget *parent = nullptr);
  ~WgSound();
 signals:
  void closing();
  void write(QString data);

 private:
  Ui::WgSound *ui;

  void closeEvent(QCloseEvent *event) override {
    emit closing();
    QWidget::closeEvent(event);
  }
};

#endif  // WG_SOUND_H
