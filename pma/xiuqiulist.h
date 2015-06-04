#ifndef XIUQIULIST_H
#define XIUQIULIST_H

#include <QWidget>

namespace Ui {
class xiuqiulist;
}

class xiuqiulist : public QWidget
{
    Q_OBJECT

public:
    explicit xiuqiulist(QWidget *parent = 0);
    ~xiuqiulist();

private:
    Ui::xiuqiulist *ui;
};

#endif // XIUQIULIST_H
