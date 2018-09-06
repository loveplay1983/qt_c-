#include "widget.h"
#include "ui_widget.h"
#include "info.h"


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
    info *dia = new info(this);

    connect(dia, &info::accepted, [=]{
       qDebug() << "accepted.";
    });
    connect(dia, &info::rejected, [=]{
       qDebug() << "rejected.";
    });

    dia->exec();
}
