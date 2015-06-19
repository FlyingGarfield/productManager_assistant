#ifndef TASKTIME_H
#define TASKTIME_H

#include <QWidget>
#include <QInputDialog>
#include <QSqlTableModel>
#include <QCloseEvent>
#include <QTableView>
#include <QMessageBox>
#include <QSqlError>
#include <QDebug>
#include <QString>
#include <QSqlRecord>
#include <QTimer>

namespace Ui {
class tasktime;
}

class tasktime : public QWidget
{
    Q_OBJECT

public:
    explicit tasktime(QWidget *parent = 0);
    ~tasktime();

private:
    Ui::tasktime *ui;
    QSqlTableModel *model1;
    QSqlTableModel *model2;
    QSqlRecord record;
    QTimer *timer1;
    int time1;
    int time2;

private slots:
    void slot_name();
    void closeEvent(QCloseEvent *);
    void xiuxi_slot();
    void start();
    void jieshu();

};

#endif // TASKTIME_H
