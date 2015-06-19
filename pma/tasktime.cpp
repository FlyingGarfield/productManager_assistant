#include "tasktime.h"
#include "ui_tasktime.h"

tasktime::tasktime(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tasktime)
{
    ui->setupUi(this);
    model1=new QSqlTableModel(this);
    model1->setTable("renwu");
    model1->setEditStrategy(QSqlTableModel::OnFieldChange);
    model1->setFilter(QObject::tr("status = '%1'").arg(QString::fromLocal8Bit("未完成")));
    model1->removeColumn(2);
    model1->select();
    model1->setHeaderData(0, Qt::Horizontal,QStringLiteral("任务ID"));
    model1->setHeaderData(1,Qt::Horizontal,QStringLiteral("任务名称"));
    model1->setHeaderData(2,Qt::Horizontal,QStringLiteral("计划状态"));
    ui->renwu->setModel(model1);

    model2=new QSqlTableModel(this);
    model2->setTable("shiwu");
    model2->setEditStrategy(QSqlTableModel::OnFieldChange);
    model2->select();
    model2->setHeaderData(0, Qt::Horizontal,QStringLiteral("事务ID"));
    model2->setHeaderData(1,Qt::Horizontal,QStringLiteral("完成时间"));
    model2->setHeaderData(2,Qt::Horizontal,QStringLiteral("事务名称"));
    ui->shiwu->setModel(model2);

    timer1=new QTimer(this);
    time1=25;
    time2=time1*60-1;
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(start()));
    connect(timer1,SIGNAL(timeout()),this,SLOT(xiuxi_slot()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(jieshu()));
}
tasktime::~tasktime()
{
    delete ui;
}
void tasktime::slot_name()
{
        bool ok;
        int rowNum = model2->rowCount(); //获得表的行数
        model2->insertRow(rowNum); //添加一行
        model2->setData(model2->index(rowNum,0),rowNum+1);

        QString name = QInputDialog::getText(this,QString::fromLocal8Bit("记录"),QString::fromLocal8Bit("请输入刚刚完成的事务名："),QLineEdit::Normal,"",&ok);
        model2->setData(model2->index(rowNum,2),name);
        model2->submitAll(); //可以直接提交
}
void tasktime::closeEvent(QCloseEvent *e)
{
    e->ignore();
    this->hide();
}
void tasktime::xiuxi_slot()
{
    if(time2>=0){
        ui->fen->setText(QString::number(time2/60,10));
        ui->miao->setText(QString::number(time2%60,10));
        time2--;
    }
    else if (time2<0) {
        time2=time1*60-1;
        jieshu();
    }
}
void tasktime::start()
{
    timer1->start(1000);
    ui->pushButton->setText(QString::fromLocal8Bit("努力工作！加油"));
}
void tasktime::jieshu()
{
    if(timer1->isActive())
    {
        timer1->stop();
        ui->pushButton->setText(QString::fromLocal8Bit("开始倒计时"));
        slot_name();
        ui->fen->setText("25");
        ui->miao->setText("00");
    }
}
