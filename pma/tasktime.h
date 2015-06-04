#ifndef TASKTIME_H
#define TASKTIME_H

#include <QWidget>

namespace Ui {
class tasktime;
}

class tasktime : public QWidget
{
    Q_OBJECT

public:
    explicit tasktime(QWidget *parent = 0);
    ~tasktime();

private:
    Ui::tasktime *ui;
};

#endif // TASKTIME_H
