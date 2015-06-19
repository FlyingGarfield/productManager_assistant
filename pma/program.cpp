#include "program.h"
#include "ui_program.h"

program::program(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::program)
{
    ui->setupUi(this);
    model=new QSqlTableModel(this);
    model->setTable("xiangmu");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();
    model->setHeaderData(0, Qt::Horizontal,QStringLiteral("项目ID"));
    model->setHeaderData(1,Qt::Horizontal,QStringLiteral("项目名称"));
    model->setHeaderData(2,Qt::Horizontal,QStringLiteral("计划完成时间"));
    model->setHeaderData(3,Qt::Horizontal,QStringLiteral("项目负责人"));
    model->setHeaderData(4,Qt::Horizontal,QStringLiteral("项目状态"));
    ui->tableView->setModel(NULL);
    ui->tableView->setModel(model);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    connect(ui->queren,SIGNAL(clicked()),this,SLOT(queren()));
    connect(ui->tianjia,SIGNAL(clicked()),this,SLOT(tianjia()));
    connect(ui->shanchu,SIGNAL(clicked()),this,SLOT(shanchu()));
    connect(ui->chexiao,SIGNAL(clicked()),this,SLOT(chexiao()));
    connect(ui->time,SIGNAL(currentIndexChanged(QString)),this,SLOT(time(QString)));
    connect(ui->zt,SIGNAL(currentIndexChanged(QString)),this,SLOT(zt(QString)));
}

program::~program()
{
    delete ui;
}
void program::closeEvent(QCloseEvent *e)
{
    e->ignore();
    this->hide();
}
void program::queren()
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
void program::tianjia()
{
    int rowNum = model->rowCount(); //获得表的行数
    model->insertRow(rowNum); //添加一行
    model->setData(model->index(rowNum,0),rowNum+1);
    model->submitAll(); //可以直接提交
}
void program::shanchu()
{
    int curRow = ui->tableView->currentIndex().row();
         //获取选中的行
    model->removeRow(curRow);
    //ui->tableView->hideRow(curRow);

}
void program::chexiao()
{
    model->revertAll();
}
void program::time(QString str)
{
    if(str==QString::fromLocal8Bit("由晚到早"))
    {
        model->setSort(2,Qt::DescendingOrder); //id属性，即第2列，升序排列
        model->select();
    }
    else if (str==QString::fromLocal8Bit("由早到晚")) {
        model->setSort(2,Qt::AscendingOrder); //id属性，即第2列，升序排列
        model->select();
    }
    else if (str==QString::fromLocal8Bit("无")) {
        model->setSort(0,Qt::AscendingOrder); //id属性，即第2列，升序排列
        model->select();
    }
}
void program::zt(QString str)
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
