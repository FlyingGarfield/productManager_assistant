#include "xuqiu.h"
#include "ui_xuqiu.h"

xuqiu::xuqiu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::xuqiu)
{
    ui->setupUi(this);
}

xuqiu::~xuqiu()
{
    delete ui;
}
void xuqiu::closeEvent(QCloseEvent *e)
{
    e->ignore();
    this->hide();
}
