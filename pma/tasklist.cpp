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
    model->setHeaderData(0, Qt::Horizontal,QStringLiteral("����ID"));
    model->setHeaderData(1,Qt::Horizontal,QStringLiteral("��������"));
    model->setHeaderData(2,Qt::Horizontal,QStringLiteral("�������ȼ�"));
    model->setHeaderData(3,Qt::Horizontal,QStringLiteral("����״̬"));
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
void tasklist::tianjia()
{
    int rowNum = model->rowCount(); //��ñ������
    model->insertRow(rowNum); //���һ��

    model->setData(model->index(rowNum,0),rowNum+1);
    model->submitAll(); //����ֱ���ύ
}
void tasklist::shanchu()
{
    int curRow = ui->tableView->currentIndex().row();
         //��ȡѡ�е���
    model->removeRow(curRow);
    //ui->tableView->hideRow(curRow);

}
void tasklist::chexiao()
{
    model->revertAll();
}
void tasklist::yxj(QString str)
{
    if(str==QString::fromLocal8Bit("��")){
        model->setFilter(QObject::tr("yxj = '%1'").arg(str)); //������������ɸѡ
        model->select(); //��ʾ���
    }
    else if(str==QString::fromLocal8Bit("��")){
        model->setFilter(QObject::tr("yxj = '%1'").arg(str)); //������������ɸѡ
        model->select(); //��ʾ���
    }
    else if(str==QString::fromLocal8Bit("��")){
        model->setFilter(QObject::tr("yxj = '%1'").arg(str)); //������������ɸѡ
        model->select(); //��ʾ���
    }
    else if(str==QString::fromLocal8Bit("��")){
        model->setFilter("");
        model->select(); //��ʾ���
    }
}
void tasklist::zt(QString str)
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
void tasklist::closeEvent(QCloseEvent *e)
{
    e->ignore();
    this->hide();
}
