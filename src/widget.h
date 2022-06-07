#ifndef WIDGET_H
#define WIDGET_H

#include <QSerialPort>
#include <QTimer>
#include <QWidget>
#include <memory>
#include <string>

#include "connect_widget.h"
#include "port_handler.h"
#include "wg_light.h"
#include "wg_sound.h"
#include "wg_water.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget {
  Q_OBJECT

 public:
  Widget(QWidget *parent = nullptr);
  ~Widget();

 private:
  Ui::Widget *ui;
  QSerialPort m_port;
  PortHandler *m_handler;
  QTimer m_timer;
  ConnectWidget m_connectWidget;

  std::unique_ptr<WgWater> m_wgWater;
  std::unique_ptr<WgLight> m_wgLight;
  std::unique_ptr<WgSound> m_wgSound;

 private slots:
  void onTimeout();
};
#endif  // WIDGET_H
