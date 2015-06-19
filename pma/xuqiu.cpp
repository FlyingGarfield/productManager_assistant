#include "xuqiu.h"
#include "ui_xuqiu.h"

xuqiu::xuqiu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::xuqiu)
{
    ui->setupUi(this);
    model=new QSqlTableModel(this);
    model->setTable("xuqiu");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();
    model->setHeaderData(0, Qt::Horizontal,QStringLiteral("����ID"));
    model->setHeaderData(1,Qt::Horizontal,QStringLiteral("��������"));
    model->setHeaderData(2,Qt::Horizontal,QStringLiteral("�������"));
    model->setHeaderData(3,Qt::Horizontal,QStringLiteral("�������ȼ�"));
    model->setHeaderData(4,Qt::Horizontal,QStringLiteral("�Ƿ��Ѵ���"));
    ui->tableView->setModel(NULL);
    ui->tableView->setModel(model);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    connect(ui->queren,SIGNAL(clicked()),this,SLOT(queren()));
    connect(ui->tianjia,SIGNAL(clicked()),this,SLOT(tianjia()));
    connect(ui->shanchu,SIGNAL(clicked()),this,SLOT(shanchu()));
    connect(ui->chexiao,SIGNAL(clicked()),this,SLOT(chexiao()));
    connect(ui->leibie,SIGNAL(currentIndexChanged(QString)),this,SLOT(leibie(QString)));
    connect(ui->yxj,SIGNAL(currentIndexChanged(QString)),this,SLOT(yxj(QString)));
    connect(ui->zt,SIGNAL(currentIndexChanged(QString)),this,SLOT(zt(QString)));
    connect(ui->chaxun,SIGNAL(clicked()),this,SLOT(chaxun()));
}

xuqiu::~xuqiu()
{
    delete ui;
}
void xuqiu::closeEvent(QCloseEvent *e)
{
    e->ignore();
    this->hide();
}
void xuqiu::queren()
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
void xuqiu::tianjia()
{
    int rowNum = model->rowCount(); //��ñ������
    model->insertRow(rowNum); //���һ��
    model->setData(model->index(rowNum,0),rowNum+1);
    model->submitAll(); //����ֱ���ύ
}
void xuqiu::shanchu()
{
    int curRow = ui->tableView->currentIndex().row();
         //��ȡѡ�е���
    model->removeRow(curRow);
    //ui->tableView->hideRow(curRow);

}
void xuqiu::chexiao()
{
    model->revertAll();
}
void xuqiu::leibie(QString str)
{
    if(str==QString::fromLocal8Bit("bug")){
        model->setFilter(QObject::tr("type = '%1'").arg(str)); //������������ɸѡ
        model->select(); //��ʾ���
    }
    else if(str==QString::fromLocal8Bit("�Ż�")){
        model->setFilter(QObject::tr("type = '%1'").arg(str)); //������������ɸѡ
        model->select(); //��ʾ���
    }
    else if(str==QString::fromLocal8Bit("�¹���")){
        model->setFilter(QObject::tr("type = '%1'").arg(str)); //������������ɸѡ
        model->select(); //��ʾ���
    }
    else if(str==QString::fromLocal8Bit("��")){
        model->setFilter("");
        model->select(); //��ʾ���
    }

}
void xuqiu::yxj(QString str)
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
void xuqiu::zt(QString str)
{
    if(str==QString::fromLocal8Bit("δ����")){
        model->setFilter(QObject::tr("status = '%1'").arg(str)); //������������ɸѡ
        model->select(); //��ʾ���
    }
    else if(str==QString::fromLocal8Bit("�Ѵ���")){
        model->setFilter(QObject::tr(" = '%1'").arg(str)); //������������ɸѡ
        model->select(); //��ʾ���
    }
    else if(str==QString::fromLocal8Bit("��")){
        model->setFilter("");
        model->select(); //��ʾ���
    }
}
void xuqiu::chaxun()
{
    QString str= ui->lineEdit->text();
    qDebug() << str ;
    model->setFilter(QObject::tr("type like '%1'").arg('%'+str+'%')); //������������ɸѡ
    model->select(); //��ʾ���
}
