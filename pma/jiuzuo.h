#ifndef JIUZUO_H
#define JIUZUO_H

#include <QWidget>
#include <QCloseEvent>
namespace Ui {
class jiuzuo;
}

class jiuzuo : public QWidget
{
    Q_OBJECT

public:
    explicit jiuzuo(QWidget *parent = 0);
    ~jiuzuo();

private:
    Ui::jiuzuo *ui;
    void closeEvent(QCloseEvent *);
};

#endif // JIUZUO_H
