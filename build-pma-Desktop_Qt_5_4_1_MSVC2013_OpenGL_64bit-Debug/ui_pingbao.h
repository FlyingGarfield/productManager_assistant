/********************************************************************************
** Form generated from reading UI file 'pingbao.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PINGBAO_H
#define UI_PINGBAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pingbao
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *ctime;
    QPushButton *pushButton;
    QLabel *fen;
    QLabel *miao;

    void setupUi(QWidget *pingbao)
    {
        if (pingbao->objectName().isEmpty())
            pingbao->setObjectName(QStringLiteral("pingbao"));
        pingbao->resize(1016, 560);
        pingbao->setBaseSize(QSize(1366, 768));
        pingbao->setAutoFillBackground(false);
        label = new QLabel(pingbao);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(470, 200, 419, 27));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setFrameShape(QFrame::StyledPanel);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(pingbao);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(550, 250, 285, 27));
        label_2->setFont(font);
        label_2->setFrameShape(QFrame::StyledPanel);
        label_2->setAlignment(Qt::AlignCenter);
        ctime = new QLabel(pingbao);
        ctime->setObjectName(QStringLiteral("ctime"));
        ctime->setGeometry(QRect(520, 0, 301, 27));
        ctime->setFont(font);
        ctime->setFrameShape(QFrame::StyledPanel);
        ctime->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(pingbao);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(640, 330, 75, 23));
        fen = new QLabel(pingbao);
        fen->setObjectName(QStringLiteral("fen"));
        fen->setGeometry(QRect(600, 290, 71, 27));
        fen->setFont(font);
        fen->setFrameShape(QFrame::StyledPanel);
        fen->setAlignment(Qt::AlignCenter);
        miao = new QLabel(pingbao);
        miao->setObjectName(QStringLiteral("miao"));
        miao->setGeometry(QRect(690, 290, 71, 27));
        miao->setFont(font);
        miao->setFrameShape(QFrame::StyledPanel);
        miao->setAlignment(Qt::AlignCenter);

        retranslateUi(pingbao);

        QMetaObject::connectSlotsByName(pingbao);
    } // setupUi

    void retranslateUi(QWidget *pingbao)
    {
        pingbao->setWindowTitle(QApplication::translate("pingbao", "\346\217\220\351\206\222", 0));
        label->setText(QApplication::translate("pingbao", " \346\202\250\345\267\262\347\273\217\345\201\232\344\272\206\345\276\210\344\271\205\344\272\206\357\274\214\344\274\221\346\201\257\344\270\200\344\270\213\345\220\247\357\274\201", 0));
        label_2->setText(QApplication::translate("pingbao", "\344\274\221\346\201\257\346\227\266\351\227\264\350\277\230\345\211\251\357\274\232", 0));
        ctime->setText(QString());
        pushButton->setText(QApplication::translate("pingbao", "\351\200\200\345\207\272\345\261\217\344\277\235", 0));
        fen->setText(QString());
        miao->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class pingbao: public Ui_pingbao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINGBAO_H
