#ifndef PINGBAO_H
#define PINGBAO_H

#include <QWidget>
#include <QKeyEvent>
#include <QSqlQuery>
#include <QMessageBox>
#include <QPalette>
#include <QDateTime>
#include <QTimer>

namespace Ui {
class pingbao;
}

class pingbao : public QWidget
{
    Q_OBJECT

public:
    explicit pingbao(QWidget *parent = 0);
    ~pingbao();

protected:
    void keyPressEvent(QKeyEvent *event);
private:
    Ui::pingbao *ui;
    QSqlQuery query;
    QString fileURL;
    QPalette palet;
    QTimer *xiuxi_timer;
    QTimer *tixing_timer;
    QDateTime current_time;
    int time1;
    int time2;
    int tixing_time;
    int xiuxi_time;
    int type;
    void update_img();

private slots:
    void show();
    void tixing_slot();
    void xiuxi_slot();
    void refresh();
};

#endif // PINGBAO_H
