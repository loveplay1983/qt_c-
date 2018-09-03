#include "widget.h"
#include "ui_widget.h"
#include <QGridLayout>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);


    //define layout
    QGridLayout *gridLayout = new QGridLayout(this);

    // first row
    gridLayout->addWidget(ui->btn1, 0, 0);
    gridLayout->addWidget(ui->btn2, 0, 1);
    gridLayout->addWidget(ui->btn3, 0, 2);

    // second row
    gridLayout->addWidget(ui->btn4, 1, 0);
    gridLayout->addWidget(ui->btn5, 1, 1, 1, 2);
//    gridLayout->addWidget(ui->btn6, 1, 2);

    // third row
    gridLayout->addWidget(ui->btn7, 2, 0, 1, 2);
//    gridLayout->addWidget(ui->btn8, 2, 1);
    gridLayout->addWidget(ui->btn9, 2, 2);


    // set layout
//    setLayout(gridLayout);


}

Widget::~Widget()
{
    delete ui;
}
