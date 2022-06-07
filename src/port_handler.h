#pragma once

#include <QSerialPort>
#include <QSerialPortInfo>

class PortHandler : public QObject {
  Q_OBJECT
 public:
  PortHandler(QSerialPort &port, QObject *parent = nullptr);

 public slots:
  void onReadyRead();
  void onWrite(QString msg);
  void onError(QSerialPort::SerialPortError err);

 private:
  QSerialPort &m_port;
};
