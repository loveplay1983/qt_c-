#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

//    ui->title->move(0, 10);

    QPixmap robot(":/images/asimo.jpg");


//    ui->img->move(200,100);

    ui->img->setPixmap(robot.scaled(360, 400));
}

Widget::~Widget()
{
    delete ui;
}
