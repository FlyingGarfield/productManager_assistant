#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSystemTrayIcon>
#include <QAction>
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
    void creatSystemicon();
    void creatAction();
    void showTraymessage();
    void creatTraymenu();
private slots:
    void onSystemTrayIconClicked(QSystemTrayIcon::ActivationReason reason);
};

#endif // MAINWINDOW_H
