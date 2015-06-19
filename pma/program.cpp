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
    model->setHeaderData(0, Qt::Horizontal,QStringLiteral("��ĿID"));
    model->setHeaderData(1,Qt::Horizontal,QStringLiteral("��Ŀ����"));
    model->setHeaderData(2,Qt::Horizontal,QStringLiteral("�ƻ����ʱ��"));
    model->setHeaderData(3,Qt::Horizontal,QStringLiteral("��Ŀ������"));
    model->setHeaderData(4,Qt::Horizontal,QStringLiteral("��Ŀ״̬"));
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
    model->database().transaction();  //��ʼ�������
    if (model->submitAll()) {
         model->database().commit(); //�ύ
         return;
     }
     else{
         model->database().rollback(); //�ع�
         QMessageBox::warning(this, tr("tishi"),
                               tr("���ݿ����: %1").arg(model->lastError().text()));
      }
    model->submitAll();
}
void program::tianjia()
{
    int rowNum = model->rowCount(); //��ñ������
    model->insertRow(rowNum); //���һ��
    model->setData(model->index(rowNum,0),rowNum+1);
    model->submitAll(); //����ֱ���ύ
}
void program::shanchu()
{
    int curRow = ui->tableView->currentIndex().row();
         //��ȡѡ�е���
    model->removeRow(curRow);
    //ui->tableView->hideRow(curRow);

}
void program::chexiao()
{
    model->revertAll();
}
void program::time(QString str)
{
    if(str==QString::fromLocal8Bit("������"))
    {
        model->setSort(2,Qt::DescendingOrder); //id���ԣ�����2�У���������
        model->select();
    }
    else if (str==QString::fromLocal8Bit("���絽��")) {
        model->setSort(2,Qt::AscendingOrder); //id���ԣ�����2�У���������
        model->select();
    }
    else if (str==QString::fromLocal8Bit("��")) {
        model->setSort(0,Qt::AscendingOrder); //id���ԣ�����2�У���������
        model->select();
    }
}
void program::zt(QString str)
{
        if(str==QString::fromLocal8Bit("δ���")){
            model->setFilter(QObject::tr("status = '%1'").arg(str)); //������������ɸѡ
            model->select(); //��ʾ���
        }
        else if(str==QString::fromLocal8Bit("�����")){
            model->setFilter(QObject::tr("status = '%1'").arg(str)); //������������ɸѡ
            model->select(); //��ʾ���
        }
        else if(str==QString::fromLocal8Bit("��")){
            model->setFilter("");
            model->select(); //��ʾ���
        }
        else if(str==QString::fromLocal8Bit("����")){
            model->setFilter(QObject::tr("status = '%1'").arg(str));
            model->select(); //��ʾ���
        }
}
