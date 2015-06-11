#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSystemTrayIcon>
#include <QAction>
#include <QCloseEvent>
#include <QtSql>
#include "jiuzuo.h"
#include "xuqiu.h"
#include "tasklist.h"
#include "tasktime.h"
#include "program.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QSystemTrayIcon *trayicon;
    QMenu *trayIconmenu;
    jiuzuo *jiuzuotx;
    tasklist *taskLsit;
    tasktime *taskTime;
    program *proGram;
    xuqiu *xuQiu;
    QSqlDatabase db;
    void creatSystemicon();
    void creatAction();
    void showTraymessage();
    void creatTraymenu();
    void closeEvent(QCloseEvent *);
    void connect_db();
private slots:
    void onSystemTrayIconClicked(QSystemTrayIcon::ActivationReason reason);
    void CreatJiuzuotx();
    void CreatXuqiu();
    void CreatTasklist();
    void CreatTasktime();
    void CreatProgram();
};

#endif // MAINWINDOW_H
