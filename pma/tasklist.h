#ifndef TASKLIST_H
#define TASKLIST_H

#include <QWidget>

namespace Ui {
class tasklist;
}

class tasklist : public QWidget
{
    Q_OBJECT

public:
    explicit tasklist(QWidget *parent = 0);
    ~tasklist();

private:
    Ui::tasklist *ui;
};

#endif // TASKLIST_H
