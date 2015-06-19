#include "tasklist.h"
#include "ui_tasklist.h"

tasklist::tasklist(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tasklist)
{
    ui->setupUi(this);
    model=new QSqlTableModel(this);
    model->setTable("renwu");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();
    model->setHeaderData(0, Qt::Horizontal,QStringLiteral("任务ID"));
    model->setHeaderData(1,Qt::Horizontal,QStringLiteral("任务名称"));
    model->setHeaderData(2,Qt::Horizontal,QStringLiteral("任务优先级"));
    model->setHeaderData(3,Qt::Horizontal,QStringLiteral("任务状态"));
    ui->tableView->setModel(NULL);
    ui->tableView->setModel(model);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    connect(ui->queren,SIGNAL(clicked()),this,SLOT(queren()));
    connect(ui->tianjia,SIGNAL(clicked()),this,SLOT(tianjia()));
    connect(ui->shanchu,SIGNAL(clicked()),this,SLOT(shanchu()));
    connect(ui->chexiao,SIGNAL(clicked()),this,SLOT(chexiao()));
    connect(ui->yxj,SIGNAL(currentIndexChanged(QString)),this,SLOT(yxj(QString)));
    connect(ui->zt,SIGNAL(currentIndexChanged(QString)),this,SLOT(zt(QString)));
}

tasklist::~tasklist()
{
    delete ui;
}
void tasklist::queren()
{
    model->database().transaction();  //开始事务操作
    if (model->submitAll()) {
         model->database().commit(); //提交
         return;
     }
     else{
         model->database().rollback(); //回滚
         QMessageBox::warning(this, tr("tishi"),
                               tr("数据库错误: %1").arg(model->lastError().text()));
      }
    model->submitAll();
}
void tasklist::tianjia()
{
    int rowNum = model->rowCount(); //获得表的行数
    model->insertRow(rowNum); //添加一行

    model->setData(model->index(rowNum,0),rowNum+1);
    model->submitAll(); //可以直接提交
}
void tasklist::shanchu()
{
    int curRow = ui->tableView->currentIndex().row();
         //获取选中的行
    model->removeRow(curRow);
    //ui->tableView->hideRow(curRow);

}
void tasklist::chexiao()
{
    model->revertAll();
}
void tasklist::yxj(QString str)
{
    if(str==QString::fromLocal8Bit("高")){
        model->setFilter(QObject::tr("yxj = '%1'").arg(str)); //根据姓名进行筛选
        model->select(); //显示结果
    }
    else if(str==QString::fromLocal8Bit("中")){
        model->setFilter(QObject::tr("yxj = '%1'").arg(str)); //根据姓名进行筛选
        model->select(); //显示结果
    }
    else if(str==QString::fromLocal8Bit("低")){
        model->setFilter(QObject::tr("yxj = '%1'").arg(str)); //根据姓名进行筛选
        model->select(); //显示结果
    }
    else if(str==QString::fromLocal8Bit("无")){
        model->setFilter("");
        model->select(); //显示结果
    }
}
void tasklist::zt(QString str)
{
        if(str==QString::fromLocal8Bit("未完成")){
            model->setFilter(QObject::tr("status = '%1'").arg(str)); //根据姓名进行筛选
            model->select(); //显示结果
        }
        else if(str==QString::fromLocal8Bit("已完成")){
            model->setFilter(QObject::tr("status = '%1'").arg(str)); //根据姓名进行筛选
            model->select(); //显示结果
        }
        else if(str==QString::fromLocal8Bit("无")){
            model->setFilter("");
            model->select(); //显示结果
        }
        else if(str==QString::fromLocal8Bit("延期")){
            model->setFilter(QObject::tr("status = '%1'").arg(str));
            model->select(); //显示结果
        }
}
void tasklist::closeEvent(QCloseEvent *e)
{
    e->ignore();
    this->hide();
}
