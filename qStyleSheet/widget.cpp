#include "widget.h"
#include "ui_widget.h"
#include "customdia.h"

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



void Widget::on_click_clicked()
{
    customDia *dialog = new customDia(this);

    // set style sheet on a container widget
    dialog->setStyleSheet("QPushButton{color: blue; background-color: yellow;}");

    dialog->exec(); // run the dialog

}
