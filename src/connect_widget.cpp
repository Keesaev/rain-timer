#include "connect_widget.h"
#include "ui_connect_widget.h"

ConnectWidget::ConnectWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ConnectWidget)
{
    ui->setupUi(this);
}

ConnectWidget::~ConnectWidget()
{
    delete ui;
}
