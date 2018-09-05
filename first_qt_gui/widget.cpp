#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <iostream>
#include <QMessageBox>

using namespace std;

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
//    qDebug() << "User clicked on a button";
//    clog << "User clicked on a button" << endl;
    QMessageBox::information(this, "Message", "You clicked on the button", QMessageBox::Ok);
}
