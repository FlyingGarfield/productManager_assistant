#include "pingbao.h"
#include "ui_pingbao.h"

pingbao::pingbao(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pingbao)
{
    ui->setupUi(this);
    hide();
    current_time=QDateTime::currentDateTime();
    QString string=current_time.toString(("yyyy-MM-dd"));
    query.exec("select url from jiuzuo");
    ui->ctime->setText("今天日期 "+string);
    while(query.next())
    {
        fileURL=query.value(0).toString();
    }
    setAutoFillBackground(true);
    update_img();
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(hide()));
}

pingbao::~pingbao()
{
    delete ui;
}
void pingbao::show()
{
    showFullScreen();
    update_img();
}
void pingbao::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_Escape)
    {
        hide();
    }
}
void pingbao::update_img()
{
    query.exec("select url from jiuzuo");
    while(query.next())
    {
        fileURL=query.value(0).toString();
    }
    QPixmap pixmap(fileURL);
    palet.setBrush(QPalette::Window, QBrush(pixmap));
    setPalette(palet);
}
