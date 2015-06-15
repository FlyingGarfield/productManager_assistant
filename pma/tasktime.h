#ifndef TASKTIME_H
#define TASKTIME_H

#include <QWidget>
#include <QInputDialog>
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
private slots:
    void slot_name();
};

#endif // TASKTIME_H
