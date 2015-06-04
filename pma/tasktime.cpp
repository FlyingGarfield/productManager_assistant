#include "tasktime.h"
#include "ui_tasktime.h"

tasktime::tasktime(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tasktime)
{
    ui->setupUi(this);
}

tasktime::~tasktime()
{
    delete ui;
}
