/********************************************************************************
** Form generated from reading UI file 'wg_sound.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WG_SOUND_H
#define UI_WG_SOUND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WgSound
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QRadioButton *radioOn;
    QRadioButton *radioOff;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpinBox *spinBox;
    QLabel *label;
    QSlider *horizontalSlider;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbOk;
    QPushButton *pbCancel;

    void setupUi(QWidget *WgSound)
    {
        if (WgSound->objectName().isEmpty())
            WgSound->setObjectName(QString::fromUtf8("WgSound"));
        WgSound->resize(400, 350);
        verticalLayout = new QVBoxLayout(WgSound);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(20, 20, 20, 20);
        label_2 = new QLabel(WgSound);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        radioOn = new QRadioButton(WgSound);
        radioOn->setObjectName(QString::fromUtf8("radioOn"));
        radioOn->setChecked(true);

        verticalLayout->addWidget(radioOn);

        radioOff = new QRadioButton(WgSound);
        radioOff->setObjectName(QString::fromUtf8("radioOff"));

        verticalLayout->addWidget(radioOff);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(WgSound);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setWordWrap(true);

        horizontalLayout_2->addWidget(label_3);

        spinBox = new QSpinBox(WgSound);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout_2->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        label = new QLabel(WgSound);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalSlider = new QSlider(WgSound);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMinimum(500);
        horizontalSlider->setMaximum(4300);
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 20, -1, -1);
        pbOk = new QPushButton(WgSound);
        pbOk->setObjectName(QString::fromUtf8("pbOk"));

        horizontalLayout->addWidget(pbOk);

        pbCancel = new QPushButton(WgSound);
        pbCancel->setObjectName(QString::fromUtf8("pbCancel"));

        horizontalLayout->addWidget(pbCancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(WgSound);

        QMetaObject::connectSlotsByName(WgSound);
    } // setupUi

    void retranslateUi(QWidget *WgSound)
    {
        WgSound->setWindowTitle(QCoreApplication::translate("WgSound", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \320\267\320\262\321\203\320\272\320\276\320\262\320\276\320\271 \321\201\320\270\320\263\320\275\320\260\320\273\320\270\320\267\320\260\321\206\320\270\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("WgSound", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \321\202\320\260\320\271\320\274\320\265\321\200\320\260", nullptr));
        radioOn->setText(QCoreApplication::translate("WgSound", "\320\222\320\272\320\273", nullptr));
        radioOff->setText(QCoreApplication::translate("WgSound", "\320\222\321\213\320\272\320\273", nullptr));
        label_3->setText(QCoreApplication::translate("WgSound", "\320\222\321\200\320\265\320\274\321\217 \320\267\320\262\321\203\320\272\320\260 \320\261\321\203\320\264\320\270\320\273\321\214\320\275\320\270\320\272\320\260 (\320\262 \321\201\320\265\320\272\321\203\320\275\320\264\320\260\321\205)", nullptr));
        label->setText(QCoreApplication::translate("WgSound", "\320\242\320\276\320\275\320\260\320\273\321\214\320\275\320\276\321\201\321\202\321\214 \320\267\320\262\321\203\320\272\320\260", nullptr));
        pbOk->setText(QCoreApplication::translate("WgSound", "\320\236\320\272", nullptr));
        pbCancel->setText(QCoreApplication::translate("WgSound", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WgSound: public Ui_WgSound {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WG_SOUND_H
