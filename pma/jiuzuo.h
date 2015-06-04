#ifndef JIUZUO_H
#define JIUZUO_H

#include <QWidget>
#include <QCloseEvent>
#include <QMessageBox>
#include <QDebug>
#include <QSqlQuery>
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
    void closeEvent(QCloseEvent *);
private slots:
    void modify();
};

#endif // JIUZUO_H
