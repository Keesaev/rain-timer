#ifndef WIDGET_H
#define WIDGET_H

#include <QSerialPort>
#include <QWidget>
#include <string>

#include "port_handler.h"

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

 signals:
  void writeToPort(QString msg);
 private slots:
  void onSave();
};
#endif  // WIDGET_H
