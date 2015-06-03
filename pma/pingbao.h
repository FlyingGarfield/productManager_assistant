#ifndef PINGBAO_H
#define PINGBAO_H

#include <QWidget>
#include <QKeyEvent>
namespace Ui {
class pingbao;
}

class pingbao : public QWidget
{
    Q_OBJECT

public:
    explicit pingbao(QWidget *parent = 0, int dispType=0);
    ~pingbao();

protected:
    void keyPressEvent(QKeyEvent *event);
private:
    Ui::pingbao *ui;
private slots:
    void show();
};

#endif // PINGBAO_H
