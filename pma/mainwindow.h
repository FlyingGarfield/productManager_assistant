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
    void creatAction();
    Ui::MainWindow *ui;
    QSystemTrayIcon *trayicon;
    QMenu *trayIconmenu;
    QAction *action_quit;
    QAction *action_Jiuzuotixing;
    QAction *action_Xuqiushouji;
private slots:
    void onSystemTrayIconClicked(QSystemTrayIcon::ActivationReason reason);
};

#endif // MAINWINDOW_H
