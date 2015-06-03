#include "pingbao.h"
#include "ui_pingbao.h"

pingbao::pingbao(QWidget *parent,int dispType) :
    QWidget(parent),
    ui(new Ui::pingbao)
{
    ui->setupUi(this);
    hide();
}

pingbao::~pingbao()
{
    delete ui;
}
void pingbao::show()
{
    showFullScreen();
}
void pingbao::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_Escape)
    {
        showNormal();
    }
}
