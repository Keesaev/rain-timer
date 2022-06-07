#include "port_handler.h"

#include <QDebug>

PortHandler::PortHandler(QSerialPort &port, QObject *parent)
    : QObject(parent), m_port(port) {
  connect(&m_port, &QSerialPort::readyRead, this, &PortHandler::onReadyRead);
  connect(&m_port, &QSerialPort::errorOccurred, this, &PortHandler::onError);
}

void PortHandler::onReadyRead() {
  QByteArray m_readData;
  m_readData.append(m_port.readAll());
  qDebug() << "Read: " << m_readData.data();
}

void PortHandler::write(QByteArray &data) {
  qDebug() << "Writing " << data.data() << " to port " << m_port.portName();

  const qint64 bytesWritten = m_port.write(data);
  if (bytesWritten == -1) {
    qDebug() << "Write to " << m_port.portName() << " error: "
             << ": " << m_port.error() << " " << m_port.errorString();
  } else if (bytesWritten != data.size()) {
    qDebug() << "Could not write all data to " << m_port.portName()
             << " error: "
             << ": " << m_port.error() << " " << m_port.errorString();
  } else {
    qDebug() << "Wrote " << bytesWritten << "bytes";
    m_port.flush();
  }
}

void PortHandler::onError(QSerialPort::SerialPortError err) {
  if (m_port.error() != QSerialPort::NoError)
    qDebug() << "Error: " << m_port.errorString();
}
