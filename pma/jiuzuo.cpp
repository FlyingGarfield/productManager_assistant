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
    connect(ui->xztupian,SIGNAL(clicked()),this,SLOT(getURL()));
    connect(ui->xiugai,SIGNAL(clicked()),pingBao,SLOT(refresh()));
    query.exec("select * from jiuzuo");
    while(query.next())
    {
        ui->tixingTime->setText(query.value(0).toString());
        ui->relaxTime->setText(query.value(1).toString());
        fileURL=query.value(2).toString();
        if(1==query.value(4))
            ui->radioButtonYES->setChecked(true);
        else if(0==query.value(4))
            ui->radioButtonNO->setChecked(true);
    }
    update_img();
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
    msgbox=new QMessageBox(QMessageBox::Information,QString::fromLocal8Bit("提示"),QString::fromLocal8Bit("确定修改提醒设置吗？"),QMessageBox::Yes|QMessageBox::No,NULL);
    if(msgbox->exec()==QMessageBox::Yes){
        query.prepare("update jiuzuo set tixing = :tixing,xiuxi = :xiuxi,url = :url,type = :type where id =0");
        query.bindValue(":tixing",ui->tixingTime->text().toInt());
        query.bindValue(":xiuxi",ui->relaxTime->text().toInt());
        query.bindValue(":url",fileURL);
        if(ui->radioButtonYES->isChecked())
        {
            query.bindValue(":type",1);
        }
        else if(ui->radioButtonNO->isChecked())
        {
            query.bindValue(":type",0);
        }
        query.exec();
    }
}
void jiuzuo::getURL()
{
    fileURL = QFileDialog::getOpenFileName(this,tr("open file"), ".",tr("Allfile(*.*);;img(*.png)"));
    if(fileURL.isEmpty())
        {
             return;
        }
        else
        {
            update_img();
        }
}
void jiuzuo::update_img()
{
        QImage* img=new QImage;
        if(! ( img->load(fileURL) ) ) //加载图像
        {
            QMessageBox::information(this,
                                     tr("打开图像失败"),
                                     tr("打开图像失败!"));
            delete img;
            return;
         }
        ui->imgLabel->setPixmap(QPixmap::fromImage(*img));
}
