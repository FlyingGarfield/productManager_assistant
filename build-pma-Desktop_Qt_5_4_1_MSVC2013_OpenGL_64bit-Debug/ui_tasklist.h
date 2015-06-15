/********************************************************************************
** Form generated from reading UI file 'tasklist.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKLIST_H
#define UI_TASKLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tasklist
{
public:
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *comboBox_3;
    QPushButton *pushButton_2;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox_2;

    void setupUi(QWidget *tasklist)
    {
        if (tasklist->objectName().isEmpty())
            tasklist->setObjectName(QStringLiteral("tasklist"));
        tasklist->resize(558, 305);
        tableWidget = new QTableWidget(tasklist);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(80, 60, 401, 192));
        pushButton = new QPushButton(tasklist);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 270, 75, 23));
        layoutWidget_2 = new QWidget(tasklist);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(230, 30, 151, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        comboBox_3 = new QComboBox(layoutWidget_2);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        horizontalLayout_3->addWidget(comboBox_3);

        pushButton_2 = new QPushButton(tasklist);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 270, 75, 23));
        layoutWidget_3 = new QWidget(tasklist);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(80, 30, 131, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBox_2 = new QComboBox(layoutWidget_3);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout_2->addWidget(comboBox_2);


        retranslateUi(tasklist);

        QMetaObject::connectSlotsByName(tasklist);
    } // setupUi

    void retranslateUi(QWidget *tasklist)
    {
        tasklist->setWindowTitle(QApplication::translate("tasklist", "\344\273\273\345\212\241\347\256\241\347\220\206", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("tasklist", "\344\273\273\345\212\241ID", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("tasklist", "\344\273\273\345\212\241\345\220\215\347\247\260", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("tasklist", "\344\273\273\345\212\241\344\274\230\345\205\210\347\272\247", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("tasklist", "\344\273\273\345\212\241\347\212\266\346\200\201", 0));
        pushButton->setText(QApplication::translate("tasklist", "\346\267\273\345\212\240\346\226\260\344\273\273\345\212\241", 0));
        label_3->setText(QApplication::translate("tasklist", "\347\212\266\346\200\201\357\274\232", 0));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("tasklist", "\346\234\252\345\256\214\346\210\220", 0)
        );
        pushButton_2->setText(QApplication::translate("tasklist", "\345\210\240\351\231\244\344\273\273\345\212\241", 0));
        label_2->setText(QApplication::translate("tasklist", "\346\216\222\345\272\217\357\274\232", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("tasklist", "\344\274\230\345\205\210\347\272\247", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class tasklist: public Ui_tasklist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKLIST_H
