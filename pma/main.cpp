#include <QApplication>
#include <QTextCodec>
#include "mainwindow.h"
# pragma execution_character_set("utf-8")

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("GBK"));
    MainWindow w;
    //w.show();
    return a.exec();
}
