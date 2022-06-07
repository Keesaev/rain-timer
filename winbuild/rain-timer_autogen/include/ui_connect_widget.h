/********************************************************************************
** Form generated from reading UI file 'connect_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECT_WIDGET_H
#define UI_CONNECT_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConnectWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QWidget *ConnectWidget)
    {
        if (ConnectWidget->objectName().isEmpty())
            ConnectWidget->setObjectName(QString::fromUtf8("ConnectWidget"));
        ConnectWidget->resize(368, 113);
        verticalLayout = new QVBoxLayout(ConnectWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(ConnectWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);


        retranslateUi(ConnectWidget);

        QMetaObject::connectSlotsByName(ConnectWidget);
    } // setupUi

    void retranslateUi(QWidget *ConnectWidget)
    {
        ConnectWidget->setWindowTitle(QCoreApplication::translate("ConnectWidget", "\320\235\320\265\321\202 \321\201\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\270\321\217 \321\201 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\276\320\274", nullptr));
        label->setText(QCoreApplication::translate("ConnectWidget", "\320\235\320\265\321\202 \321\201\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\270\321\217 \321\201 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\276\320\274, \320\277\320\276\320\266\320\260\320\273\321\203\320\271\321\201\321\202\320\260 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\320\265 \320\261\321\203\320\264\320\270\320\273\321\214\320\275\320\270\320\272.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConnectWidget: public Ui_ConnectWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECT_WIDGET_H
