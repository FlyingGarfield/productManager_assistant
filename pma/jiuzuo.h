#ifndef JIUZUO_H
#define JIUZUO_H

#include <QWidget>
#include <QCloseEvent>
#include <QMessageBox>
#include <QDebug>
#include <QSqlQuery>
#include <QFileDialog>
#include "pingbao.h"

namespace Ui {
class jiuzuo;
}

class jiuzuo : public QWidget
{
    Q_OBJECT

public:
    explicit jiuzuo(QWidget *parent = 0);
    ~jiuzuo();

private:
    Ui::jiuzuo *ui;
    pingbao *pingBao;
    QMessageBox *msgbox;
    QSqlQuery query;
    QString fileURL;
    void closeEvent(QCloseEvent *);
private slots:
    void modify();
    void getURL();
};

#endif // JIUZUO_H
