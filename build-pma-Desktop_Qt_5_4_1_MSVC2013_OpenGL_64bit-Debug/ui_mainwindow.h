/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionJiuzuo;
    QAction *actionXueqiuguanli;
    QAction *actionTuichu;
    QAction *actionRenwu;
    QAction *actionXiangmu;
    QAction *actionShalou;
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menuBar;
    QMenu *caidan;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        actionJiuzuo = new QAction(MainWindow);
        actionJiuzuo->setObjectName(QStringLiteral("actionJiuzuo"));
        actionXueqiuguanli = new QAction(MainWindow);
        actionXueqiuguanli->setObjectName(QStringLiteral("actionXueqiuguanli"));
        actionTuichu = new QAction(MainWindow);
        actionTuichu->setObjectName(QStringLiteral("actionTuichu"));
        actionRenwu = new QAction(MainWindow);
        actionRenwu->setObjectName(QStringLiteral("actionRenwu"));
        actionXiangmu = new QAction(MainWindow);
        actionXiangmu->setObjectName(QStringLiteral("actionXiangmu"));
        actionShalou = new QAction(MainWindow);
        actionShalou->setObjectName(QStringLiteral("actionShalou"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 80, 231, 41));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 130, 231, 31));
        label_2->setFont(font);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 170, 231, 31));
        label_3->setFont(font);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(120, 20, 171, 41));
        QFont font1;
        font1.setPointSize(25);
        label_4->setFont(font1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        caidan = new QMenu(menuBar);
        caidan->setObjectName(QStringLiteral("caidan"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(caidan->menuAction());
        caidan->addAction(actionJiuzuo);
        caidan->addAction(actionXueqiuguanli);
        caidan->addAction(actionXiangmu);
        caidan->addAction(actionRenwu);
        caidan->addAction(actionShalou);
        caidan->addSeparator();
        caidan->addAction(actionTuichu);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\347\273\274\345\220\210\346\246\202\350\247\210", 0));
        actionJiuzuo->setText(QApplication::translate("MainWindow", "\345\201\245\345\272\267\346\217\220\351\206\222", 0));
        actionXueqiuguanli->setText(QApplication::translate("MainWindow", "\351\234\200\346\261\202\347\256\241\347\220\206", 0));
        actionTuichu->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", 0));
        actionRenwu->setText(QApplication::translate("MainWindow", "\344\273\273\345\212\241\347\256\241\347\220\206", 0));
        actionXiangmu->setText(QApplication::translate("MainWindow", "\351\241\271\347\233\256\347\256\241\347\220\206", 0));
        actionShalou->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264\346\262\231\346\274\217", 0));
        label->setText(QApplication::translate("MainWindow", "\346\234\252\345\256\214\346\210\220\344\273\273\345\212\241\346\225\260\351\207\217\357\274\232   7 ", 0));
        label_2->setText(QApplication::translate("MainWindow", "\346\234\252\345\256\214\346\210\220\351\241\271\347\233\256\346\225\260\351\207\217\357\274\232   7 ", 0));
        label_3->setText(QApplication::translate("MainWindow", "\346\234\252\345\244\204\347\220\206\351\234\200\346\261\202\346\225\260\351\207\217\357\274\232   7 ", 0));
        label_4->setText(QApplication::translate("MainWindow", "\347\273\274\345\220\210\346\246\202\350\247\210", 0));
        caidan->setTitle(QApplication::translate("MainWindow", "\350\217\234\345\215\225", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
