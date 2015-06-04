#include "xiuqiulist.h"
#include "ui_xiuqiulist.h"

xiuqiulist::xiuqiulist(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::xiuqiulist)
{
    ui->setupUi(this);
}

xiuqiulist::~xiuqiulist()
{
    delete ui;
}
