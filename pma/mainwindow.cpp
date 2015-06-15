#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect_db();
    creatSystemicon();
    showTraymessage();
    jiuzuotx=new jiuzuo();
}

MainWindow::~MainWindow()
{
    db.close();
    delete ui;
}
void MainWindow::creatSystemicon()
{
    creatTraymenu();
    trayicon = new QSystemTrayIcon(this);
    QIcon icon("D:/pma/pma/ico.png");
    trayicon->setIcon(icon);

    //显示托盘图标
    trayicon->show();
    //设置系统托盘提示
    trayicon->setToolTip(tr("产品经理助手"));
    //将创建菜单作为系统托盘菜单
    trayicon->setContextMenu(trayIconmenu);
    //为系统托盘绑定单击信号的槽 即图标激活时
    connect(trayicon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)), this,
            SLOT(onSystemTrayIconClicked(QSystemTrayIcon::ActivationReason)));
}
void MainWindow::creatAction()
{
    connect(ui->actionTuichu,SIGNAL(triggered()),qApp,SLOT(quit()));
    connect(ui->actionJiuzuo,SIGNAL(triggered()),this,SLOT(CreatJiuzuotx()));
    connect(ui->actionRenwu,SIGNAL(triggered()),this,SLOT(CreatTasklist()));
    connect(ui->actionShalou,SIGNAL(triggered()),this,SLOT(CreatTasktime()));
    connect(ui->actionXiangmu,SIGNAL(triggered()),this,SLOT(CreatProgram()));
    connect(ui->actionXueqiuguanli,SIGNAL(triggered()),this,SLOT(CreatXuqiu()));
}
void MainWindow::creatTraymenu()
{
    creatAction();
    trayIconmenu=new QMenu(this);
    trayIconmenu->addAction(ui->actionXueqiuguanli);
    trayIconmenu->addAction(ui->actionJiuzuo);
    trayIconmenu->addAction(ui->actionRenwu);
    trayIconmenu->addAction(ui->actionXiangmu);
    trayIconmenu->addAction(ui->actionShalou);
    trayIconmenu->addSeparator();
    trayIconmenu->addAction(ui->actionTuichu);
}
void MainWindow::onSystemTrayIconClicked(QSystemTrayIcon::ActivationReason reason)
{
    switch(reason)
    {
        case QSystemTrayIcon::DoubleClick:
                show();
                break;
        default:
                break;
  }

}
void MainWindow::showTraymessage()
{
    trayicon->showMessage(tr("产品经理助手"), tr("工作效率加倍提升！"),
                          QSystemTrayIcon::Information, 5000);
}

void MainWindow::CreatJiuzuotx()
{
    jiuzuotx->show();
}
void MainWindow::closeEvent(QCloseEvent *e)
{
    e->ignore();
    this->hide();
}
void MainWindow::connect_db()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("pma");
    db.open();
    //QSqlQuery query;
   /*
    if (!db.open()) {
            QMessageBox::critical(0, QObject::tr("Database Error"),
                                  db.lastError().text());
        }
    if(!query.exec("create table test(i int)")) {
        QMessageBox::critical(0, QObject::tr("Database Error"),
                              db.lastError().text());
    }*/
}
void MainWindow::CreatXuqiu()
{
    xuQiu =new xuqiu();
    xuQiu->show();
}
void MainWindow::CreatTasklist()
{
    taskLsit = new tasklist();
    taskLsit->show();
}
void MainWindow::CreatTasktime()
{
    taskTime = new tasktime();
    taskTime->show();
}
void MainWindow::CreatProgram()
{
    proGram = new program();
    proGram->show();
}



