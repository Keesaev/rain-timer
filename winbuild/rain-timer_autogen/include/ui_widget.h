/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QTimeEdit *timeEdit;
    QPushButton *pbSave;
    QPushButton *pbSound;
    QPushButton *pbLight;
    QPushButton *pbWater;
    QPushButton *btnStop;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(370, 279);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(20, 20, 20, 20);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 30));
        label->setMaximumSize(QSize(16777215, 30));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        timeEdit = new QTimeEdit(Widget);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));

        horizontalLayout->addWidget(timeEdit);

        pbSave = new QPushButton(Widget);
        pbSave->setObjectName(QString::fromUtf8("pbSave"));
        pbSave->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(pbSave);


        verticalLayout->addLayout(horizontalLayout);

        pbSound = new QPushButton(Widget);
        pbSound->setObjectName(QString::fromUtf8("pbSound"));
        pbSound->setMinimumSize(QSize(0, 40));

        verticalLayout->addWidget(pbSound);

        pbLight = new QPushButton(Widget);
        pbLight->setObjectName(QString::fromUtf8("pbLight"));
        pbLight->setMinimumSize(QSize(0, 40));

        verticalLayout->addWidget(pbLight);

        pbWater = new QPushButton(Widget);
        pbWater->setObjectName(QString::fromUtf8("pbWater"));
        pbWater->setMinimumSize(QSize(0, 40));

        verticalLayout->addWidget(pbWater);

        btnStop = new QPushButton(Widget);
        btnStop->setObjectName(QString::fromUtf8("btnStop"));

        verticalLayout->addWidget(btnStop);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \321\201\320\270\320\263\320\275\320\260\320\273\320\270\320\267\320\260\321\206\320\270\320\270", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\320\221\321\203\320\264\320\270\320\273\321\214\320\275\320\270\320\272", nullptr));
        timeEdit->setDisplayFormat(QCoreApplication::translate("Widget", "hh:mm:ss", nullptr));
        pbSave->setText(QCoreApplication::translate("Widget", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pbSound->setText(QCoreApplication::translate("Widget", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \320\267\320\262\321\203\320\272\320\276\320\262\320\276\320\271 \321\201\320\270\320\263\320\275\320\260\320\273\320\270\320\267\320\260\321\206\320\270\320\270", nullptr));
        pbLight->setText(QCoreApplication::translate("Widget", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \321\201\320\262\320\265\321\202\320\276\320\262\320\276\320\271 \321\201\320\270\320\263\320\275\320\260\320\273\320\270\320\267\320\260\321\206\320\270\320\270", nullptr));
        pbWater->setText(QCoreApplication::translate("Widget", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \320\262\320\276\320\264\320\275\320\276\320\271 \321\201\320\270\320\263\320\275\320\260\320\273\320\270\320\267\320\260\321\206\320\270\320\270", nullptr));
        btnStop->setText(QCoreApplication::translate("Widget", "\320\236\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
