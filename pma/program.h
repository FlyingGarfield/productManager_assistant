#ifndef PROGRAM_H
#define PROGRAM_H

#include <QWidget>
#include <QSqlTableModel>
#include <QCloseEvent>
#include <QTableView>
#include <QMessageBox>
#include <QSqlError>
#include <QDebug>
#include <QString>

namespace Ui {
class program;
}

class program : public QWidget
{
    Q_OBJECT

public:
    explicit program(QWidget *parent = 0);
    ~program();

private:
    Ui::program *ui;
    QSqlTableModel *model;
    void closeEvent(QCloseEvent *);
private slots:
    void queren();
    void tianjia();
    void shanchu();
    void chexiao();
    void time(QString);
    void zt(QString);
};

#endif // PROGRAM_H
