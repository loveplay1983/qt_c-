#include "widget.h"
#include "ui_widget.h"
#include "styleselector.h"


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

void Widget::on_submit_clicked()
{
    styleSelector *style = new styleSelector(this);

    style->exec();
}
