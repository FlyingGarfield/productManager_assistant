#ifndef TASKLIST_H
#define TASKLIST_H

#include <QWidget>
#include <QSqlTableModel>
#include <QCloseEvent>
#include <QTableView>
#include <QMessageBox>
#include <QSqlError>
#include <QDebug>
#include <QString>
namespace Ui {
class tasklist;
}

class tasklist : public QWidget
{
    Q_OBJECT

public:
    explicit tasklist(QWidget *parent = 0);
    ~tasklist();

private:
    Ui::tasklist *ui;
    QSqlTableModel *model;
    void closeEvent(QCloseEvent *);
private slots:
    void queren();
    void tianjia();
    void shanchu();
    void chexiao();
    void yxj(QString);
    void zt(QString);
};

#endif // TASKLIST_H
