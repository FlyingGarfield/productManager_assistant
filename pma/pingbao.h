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
    QTimer current_timer;
    QTimer count_timer;
    QDateTime current_time;
    void update_img();
private slots:
    void show();
};

#endif // PINGBAO_H
