#ifndef XUQIU_H
#define XUQIU_H

#include <QWidget>
#include <QCloseEvent>
namespace Ui {
class xuqiu;
}

class xuqiu : public QWidget
{
    Q_OBJECT

public:
    explicit xuqiu(QWidget *parent = 0);
    ~xuqiu();

private:
    Ui::xuqiu *ui;
    void closeEvent(QCloseEvent *);
};

#endif // XUQIU_H
