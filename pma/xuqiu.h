#ifndef XUQIU_H
#define XUQIU_H

#include <QWidget>
#include <QCloseEvent>
#include <QSqlTableModel>
#include <QTableView>
#include <QMessageBox>
#include <QSqlError>
#include <QDebug>
#include <QString>
namespace Ui {
class xuqiu;
}

class xuqiu : public QWidget
{
    Q_OBJECT

public:
    explicit xuqiu(QWidget *parent = 0);
    ~xuqiu();

private:
    Ui::xuqiu *ui;
    QSqlTableModel *model;
    void closeEvent(QCloseEvent *);
private slots:
    void queren();
    void tianjia();
    void shanchu();
    void chexiao();
    void leibie(QString);
    void yxj(QString);
    void zt(QString);
    void chaxun();
};

#endif // XUQIU_H
