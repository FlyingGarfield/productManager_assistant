/********************************************************************************
** Form generated from reading UI file 'tasktime.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKTIME_H
#define UI_TASKTIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tasktime
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QLabel *label_3;
    QTableWidget *tableWidget_2;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *tasktime)
    {
        if (tasktime->objectName().isEmpty())
            tasktime->setObjectName(QStringLiteral("tasktime"));
        tasktime->resize(707, 339);
        pushButton = new QPushButton(tasktime);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 0, 181, 31));
        QFont font;
        font.setPointSize(12);
        pushButton->setFont(font);
        label = new QLabel(tasktime);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 40, 111, 16));
        QFont font1;
        font1.setPointSize(13);
        label->setFont(font1);
        label_2 = new QLabel(tasktime);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(380, 40, 71, 16));
        label_2->setFont(font);
        tableWidget = new QTableWidget(tasktime);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 70, 291, 192));
        label_3 = new QLabel(tasktime);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 50, 131, 16));
        label_3->setFont(font);
        tableWidget_2 = new QTableWidget(tasktime);
        if (tableWidget_2->columnCount() < 3)
            tableWidget_2->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(370, 70, 301, 192));
        label_4 = new QLabel(tasktime);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(490, 50, 181, 20));
        label_4->setFont(font);
        label_5 = new QLabel(tasktime);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(270, 300, 54, 12));

        retranslateUi(tasktime);

        QMetaObject::connectSlotsByName(tasktime);
    } // setupUi

    void retranslateUi(QWidget *tasktime)
    {
        tasktime->setWindowTitle(QApplication::translate("tasktime", "\346\227\266\351\227\264\346\262\231\346\274\217", 0));
        pushButton->setText(QApplication::translate("tasktime", "\345\274\200\345\247\213\350\256\241\346\227\266\345\276\252\347\216\257", 0));
        label->setText(QApplication::translate("tasktime", "\345\211\251\344\275\231\345\267\245\344\275\234\346\227\266\351\227\264\357\274\232", 0));
        label_2->setText(QApplication::translate("tasktime", "25\345\210\20600\347\247\222", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("tasktime", "\344\273\273\345\212\241ID", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("tasktime", "\344\273\273\345\212\241\345\220\215\347\247\260", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("tasktime", "\344\273\273\345\212\241\344\274\230\345\205\210\347\272\247", 0));
        label_3->setText(QApplication::translate("tasktime", "\346\234\252\345\256\214\346\210\220\344\273\273\345\212\241\345\210\227\350\241\250", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("tasktime", "\346\226\260\345\273\272\345\210\227", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("tasktime", "\344\272\213\345\212\241\345\220\215\347\247\260", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("tasktime", "\345\256\214\346\210\220\346\227\266\351\227\264", 0));
        label_4->setText(QApplication::translate("tasktime", "\346\262\231\346\274\217\346\227\266\351\227\264\345\206\205\345\256\214\346\210\220\344\272\213\345\212\241\345\210\227\350\241\250", 0));
        label_5->setText(QApplication::translate("tasktime", "\350\276\223\345\205\245\345\210\232\345\210\232\345\256\214\346\210\220\347\232\204\344\272\213\345\212\241", 0));
    } // retranslateUi

};

namespace Ui {
    class tasktime: public Ui_tasktime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKTIME_H
