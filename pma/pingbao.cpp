#include "pingbao.h"
#include "ui_pingbao.h"

pingbao::pingbao(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pingbao)
{
    ui->setupUi(this);
    hide();
    xiuxi_timer=new QTimer(this);
    tixing_timer=new QTimer(this);
    current_time=QDateTime::currentDateTime();
    QString string=current_time.toString(("yyyy-MM-dd"));
    query.exec("select url,xiuxi,type,tixing from jiuzuo");
    ui->ctime->setText(string);
    while(query.next())
    {
        fileURL=query.value(0).toString();
        xiuxi_time=query.value(1).toInt();
        type=query.value(2).toInt();
        tixing_time=query.value(3).toInt();
    }
    time1=tixing_time*60-1;
    time2=xiuxi_time*60-1;
    if(1==type)
    {
        tixing_slot();
        tixing_timer->start(1000);
    }
    setAutoFillBackground(true);
    update_img();
    connect(tixing_timer,SIGNAL(timeout()),this,SLOT(tixing_slot()));
    connect(xiuxi_timer,SIGNAL(timeout()),this,SLOT(xiuxi_slot()));
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(hide()));
}

pingbao::~pingbao()
{
    delete ui;
}
void pingbao::show()
{
    showFullScreen();
    update_img();
}
void pingbao::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_Escape)
    {
        hide();
    }
}
void pingbao::update_img()
{
    query.exec("select url from jiuzuo");
    while(query.next())
    {
        fileURL=query.value(0).toString();
    }
    QPixmap pixmap(fileURL);
    palet.setBrush(QPalette::Window, QBrush(pixmap));
    setPalette(palet);
}
void pingbao::tixing_slot()
{
    if(time1>=0){
        ui->fen->setText(QString::number(time1/60,10));
        ui->miao->setText(QString::number(time1%60,10));
        time1--;
    }
    else if (time1<0) {
        time1=tixing_time*60-1;
        tixing_timer->stop();
        xiuxi_timer->start(1000);
        show();
    }
}
void pingbao::xiuxi_slot()
{
    if(time2>=0){
        ui->fen->setText(QString::number(time2/60,10));
        ui->miao->setText(QString::number(time2%60,10));
        time2--;
    }
    else if (time2<0) {
        time2=xiuxi_time*60-1;
        xiuxi_timer->stop();
        tixing_timer->start(1000);
        hide();
    }
}
void pingbao::refresh()
{
    query.exec("select url,xiuxi,type,tixing from jiuzuo");
    while(query.next())
    {
        fileURL=query.value(0).toString();
        xiuxi_time=query.value(1).toInt();
        type=query.value(2).toInt();
        tixing_time=query.value(3).toInt();
    }
    time1=tixing_time*60-1;
    time2=xiuxi_time*60-1;
    if(0==type)
    {
        if(tixing_timer->isActive())
        {
            tixing_timer->stop();
        }
        if(xiuxi_timer->isActive())
        {
            xiuxi_timer->stop();
        }
    }
    else if (1==type)
    {
        tixing_timer->start(1000);
    }
}
