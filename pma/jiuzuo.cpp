#include "jiuzuo.h"
#include "ui_jiuzuo.h"

jiuzuo::jiuzuo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::jiuzuo)
{
    ui->setupUi(this);
    pingBao=new pingbao();
    connect(ui->lijitiyan,SIGNAL(clicked()),pingBao,SLOT(show()));
    connect(ui->xiugai,SIGNAL(clicked()),this,SLOT(modify()));
    QSqlQuery query;
    query.exec("select * from jiuzuo");
    while(query.next())
    {
        ui->tixingTime->setText(query.value(0).toString());
        ui->relaxTime->setText(query.value(1).toString());
    }
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
void jiuzuo::modify()
{
    msgbox=new QMessageBox(QMessageBox::Information,tr("提示"),tr("确定修改提醒设置吗？"),QMessageBox::Yes|QMessageBox::No,NULL);
    if(msgbox->exec()==QMessageBox::Yes){

    }
}
