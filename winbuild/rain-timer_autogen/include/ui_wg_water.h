/********************************************************************************
** Form generated from reading UI file 'wg_water.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WG_WATER_H
#define UI_WG_WATER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WgWater
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpinBox *spinBox40;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpinBox *spinBox41;
    QRadioButton *radioOn;
    QRadioButton *radioOff;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbOk;
    QPushButton *pbCancel;

    void setupUi(QWidget *WgWater)
    {
        if (WgWater->objectName().isEmpty())
            WgWater->setObjectName(QString::fromUtf8("WgWater"));
        WgWater->resize(400, 350);
        verticalLayout = new QVBoxLayout(WgWater);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(WgWater);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 30));

        verticalLayout->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(WgWater);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setWordWrap(true);

        horizontalLayout_2->addWidget(label_3);

        spinBox40 = new QSpinBox(WgWater);
        spinBox40->setObjectName(QString::fromUtf8("spinBox40"));
        spinBox40->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_2->addWidget(spinBox40);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(WgWater);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setWordWrap(true);

        horizontalLayout_3->addWidget(label_4);

        spinBox41 = new QSpinBox(WgWater);
        spinBox41->setObjectName(QString::fromUtf8("spinBox41"));
        spinBox41->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_3->addWidget(spinBox41);


        verticalLayout->addLayout(horizontalLayout_3);

        radioOn = new QRadioButton(WgWater);
        radioOn->setObjectName(QString::fromUtf8("radioOn"));
        radioOn->setChecked(true);

        verticalLayout->addWidget(radioOn);

        radioOff = new QRadioButton(WgWater);
        radioOff->setObjectName(QString::fromUtf8("radioOff"));

        verticalLayout->addWidget(radioOff);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 20, -1, -1);
        pbOk = new QPushButton(WgWater);
        pbOk->setObjectName(QString::fromUtf8("pbOk"));

        horizontalLayout->addWidget(pbOk);

        pbCancel = new QPushButton(WgWater);
        pbCancel->setObjectName(QString::fromUtf8("pbCancel"));

        horizontalLayout->addWidget(pbCancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(WgWater);

        QMetaObject::connectSlotsByName(WgWater);
    } // setupUi

    void retranslateUi(QWidget *WgWater)
    {
        WgWater->setWindowTitle(QCoreApplication::translate("WgWater", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \320\262\320\276\320\264\320\275\320\276\320\271 \321\201\320\270\320\263\320\275\320\260\320\273\320\270\320\267\320\260\321\206\320\270\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("WgWater", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \321\202\320\260\320\271\320\274\320\265\321\200\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("WgWater", "\320\222\321\200\320\265\320\274\321\217 \320\262\320\276\320\264\321\213 \320\277\320\276\321\201\320\273\320\265 \320\261\321\203\320\264\320\270\320\273\321\214\320\275\320\270\320\272\320\260(\320\262 \321\201\320\265\320\272\321\203\320\275\320\264\320\260\321\205)", nullptr));
        label_4->setText(QCoreApplication::translate("WgWater", "\320\224\320\273\320\270\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214 \320\276\321\202\320\272\321\200\321\213\321\202\320\276\320\263\320\276 \320\267\320\260\321\202\320\262\320\276\321\200\320\260", nullptr));
        radioOn->setText(QCoreApplication::translate("WgWater", "\320\222\320\272\320\273", nullptr));
        radioOff->setText(QCoreApplication::translate("WgWater", "\320\222\321\213\320\272\320\273", nullptr));
        pbOk->setText(QCoreApplication::translate("WgWater", "\320\236\320\272", nullptr));
        pbCancel->setText(QCoreApplication::translate("WgWater", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WgWater: public Ui_WgWater {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WG_WATER_H
