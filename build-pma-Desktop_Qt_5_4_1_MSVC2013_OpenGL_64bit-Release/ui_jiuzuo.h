/********************************************************************************
** Form generated from reading UI file 'jiuzuo.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JIUZUO_H
#define UI_JIUZUO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_jiuzuo
{
public:
    QPushButton *xiugai;
    QLabel *imgLabel;
    QPushButton *xztupian;
    QPushButton *lijitiyan;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *tixingTime;
    QLabel *label_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *relaxTime;
    QLabel *label_4;
    QRadioButton *radioButtonYES;
    QRadioButton *radioButtonNO;
    QLabel *label_5;

    void setupUi(QWidget *jiuzuo)
    {
        if (jiuzuo->objectName().isEmpty())
            jiuzuo->setObjectName(QStringLiteral("jiuzuo"));
        jiuzuo->resize(316, 337);
        xiugai = new QPushButton(jiuzuo);
        xiugai->setObjectName(QStringLiteral("xiugai"));
        xiugai->setGeometry(QRect(60, 310, 75, 23));
        imgLabel = new QLabel(jiuzuo);
        imgLabel->setObjectName(QStringLiteral("imgLabel"));
        imgLabel->setGeometry(QRect(70, 120, 171, 141));
        imgLabel->setFrameShape(QFrame::Box);
        imgLabel->setAlignment(Qt::AlignCenter);
        imgLabel->setWordWrap(false);
        xztupian = new QPushButton(jiuzuo);
        xztupian->setObjectName(QStringLiteral("xztupian"));
        xztupian->setGeometry(QRect(70, 270, 171, 23));
        lijitiyan = new QPushButton(jiuzuo);
        lijitiyan->setObjectName(QStringLiteral("lijitiyan"));
        lijitiyan->setGeometry(QRect(180, 310, 75, 23));
        layoutWidget = new QWidget(jiuzuo);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 10, 171, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        tixingTime = new QLineEdit(layoutWidget);
        tixingTime->setObjectName(QStringLiteral("tixingTime"));

        horizontalLayout->addWidget(tixingTime);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        layoutWidget1 = new QWidget(jiuzuo);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(70, 50, 171, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        relaxTime = new QLineEdit(layoutWidget1);
        relaxTime->setObjectName(QStringLiteral("relaxTime"));

        horizontalLayout_2->addWidget(relaxTime);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        radioButtonYES = new QRadioButton(jiuzuo);
        radioButtonYES->setObjectName(QStringLiteral("radioButtonYES"));
        radioButtonYES->setGeometry(QRect(140, 80, 31, 16));
        radioButtonNO = new QRadioButton(jiuzuo);
        radioButtonNO->setObjectName(QStringLiteral("radioButtonNO"));
        radioButtonNO->setGeometry(QRect(200, 80, 31, 16));
        radioButtonNO->setChecked(true);
        label_5 = new QLabel(jiuzuo);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(71, 81, 60, 16));
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        xiugai->raise();
        imgLabel->raise();
        xztupian->raise();
        lijitiyan->raise();
        radioButtonYES->raise();
        radioButtonNO->raise();

        retranslateUi(jiuzuo);

        QMetaObject::connectSlotsByName(jiuzuo);
    } // setupUi

    void retranslateUi(QWidget *jiuzuo)
    {
        jiuzuo->setWindowTitle(QApplication::translate("jiuzuo", "\345\201\245\345\272\267\346\217\220\351\206\222", 0));
        xiugai->setText(QApplication::translate("jiuzuo", "\344\277\256\346\224\271\350\256\276\345\256\232", 0));
        imgLabel->setText(QApplication::translate("jiuzuo", "\350\203\214\346\231\257\345\233\276\347\211\207\351\242\204\350\247\210", 0));
        xztupian->setText(QApplication::translate("jiuzuo", "\351\200\211\346\213\251\345\261\217\344\277\235\345\233\276\347\211\207", 0));
        lijitiyan->setText(QApplication::translate("jiuzuo", "\347\253\213\345\215\263\344\275\223\351\252\214", 0));
        label->setText(QApplication::translate("jiuzuo", "\346\217\220\351\206\222\351\227\264\351\232\224\357\274\232", 0));
        tixingTime->setText(QString());
        label_2->setText(QApplication::translate("jiuzuo", "\345\210\206\351\222\237", 0));
        label_3->setText(QApplication::translate("jiuzuo", "\344\274\221\346\201\257\346\227\266\351\227\264\357\274\232", 0));
        label_4->setText(QApplication::translate("jiuzuo", "\345\210\206\351\222\237", 0));
        radioButtonYES->setText(QApplication::translate("jiuzuo", "\346\230\257", 0));
        radioButtonNO->setText(QApplication::translate("jiuzuo", "\345\220\246", 0));
        label_5->setText(QApplication::translate("jiuzuo", "\346\230\257\345\220\246\345\274\200\345\220\257\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class jiuzuo: public Ui_jiuzuo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JIUZUO_H
