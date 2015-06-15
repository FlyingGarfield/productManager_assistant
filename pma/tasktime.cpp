#include "tasktime.h"
#include "ui_tasktime.h"

tasktime::tasktime(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tasktime)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(slot_name()));
}

tasktime::~tasktime()
{
    delete ui;
}
void tasktime::slot_name()
{
        bool ok;
        QString name = QInputDialog::getText(this,tr("Record"),tr("Input finished task name："),QLineEdit::Normal,"",&ok);
        /*
        if(ok && !name.isEmpty())
        {
            nameLabel->setText(name);
        }*/
}
