#include "widget.h"
#include "ui_widget.h"
#include <QVBoxLayout>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    /*
    QVBoxLayout *qvBox = new QVBoxLayout();

    qvBox->addWidget(ui->btn1);
    qvBox->addWidget(ui->btn2);
    qvBox->addWidget(ui->btn3);
    qvBox->addWidget(ui->btn4);
    qvBox->addWidget(ui->btn5);

    setLayout(qvBox);
    */

}

Widget::~Widget()
{
    delete ui;
}
