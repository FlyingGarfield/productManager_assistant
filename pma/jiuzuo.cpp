#include "jiuzuo.h"
#include "ui_jiuzuo.h"

jiuzuo::jiuzuo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::jiuzuo)
{
    ui->setupUi(this);
}

jiuzuo::~jiuzuo()
{
    delete ui;
}
void jiuzuo::closeEvent(QCloseEvent *e)
{
    e->ignore();
    this->hide();
}
