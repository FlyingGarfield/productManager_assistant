#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    trayicon = new QSystemTrayIcon(this);
    QIcon icon("D:/pma/pma/ico.png");
    trayiconMenu = new QMenu(this);
    action_quit = new QAction(tr("quit"),this);
    trayiconMenu->addAction(action_quit);
    trayiconMenu->addSeparator();
    //将创建的QIcon对象作为系统托盘图标
    trayicon->setIcon(icon);
    //显示托盘图标
    trayicon->show();
    //设置系统托盘提示
    trayicon->setToolTip(tr("托盘测试"));
    //将创建菜单作为系统托盘菜单
    trayicon->setContextMenu(trayiconMenu);
    //在系统托盘显示气泡消息提示
    trayicon->showMessage(tr("hahaya"), tr("托盘测试"), QSystemTrayIcon::Information, 5000);
    //为系统托盘绑定单击信号的槽 即图标激活时
    connect(trayicon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)), this,
            SLOT(onSystemTrayIconClicked(QSystemTrayIcon::ActivationReason)));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::onSystemTrayIconClicked(QSystemTrayIcon::ActivationReason reason)

{

  switch(reason)

  {

  //单击

  case QSystemTrayIcon::Trigger:

  //双击

  case QSystemTrayIcon::DoubleClick:

      //恢复窗口显示
      this->setWindowState(Qt::WindowActive);
      this->show();
      break;
  default:
      break;

  }

}



