#ifndef CONNECT_WIDGET_H
#define CONNECT_WIDGET_H

#include <QWidget>

namespace Ui {
class ConnectWidget;
}

class ConnectWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ConnectWidget(QWidget *parent = nullptr);
    ~ConnectWidget();

private:
    Ui::ConnectWidget *ui;
};

#endif // CONNECT_WIDGET_H
