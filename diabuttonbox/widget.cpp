/*

  Notice that when using lambadas you connect the method and property   to the object at first then execute it;

  Whereas the normal way we use a returned code after we first executed the oject and then using the returned code to determine what we want to do next.

*/
#include "widget.h"
#include "ui_widget.h"
#include "infodia.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{


    infoDia *dia = new infoDia(this);
    // connect the infoDia with accepted and rejected property in lambdas
    connect(dia, &infoDia::accepted, [=]{
        qDebug() << "Dialog accepted.";
    });

    connect(dia, &infoDia::accepted, [=]{
        qDebug() << "Dialog rejected. ";
    });

    dia->exec();

}
