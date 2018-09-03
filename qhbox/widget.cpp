#include "widget.h"
#include "ui_widget.h"
#include <QHBoxLayout>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    /*
    // set up layout first then add the widgets to the layout
    // noice all the widgets can be called through the ui pointer


    // define the layout
    QHBoxLayout *qhBox = new QHBoxLayout();

    // add things to the layout
    qhBox->addWidget(ui->btn1);
    qhBox->addWidget(ui->btn2);
    qhBox->addWidget(ui->btn3);
    qhBox->addWidget(ui->btn4);
    qhBox->addWidget(ui->btn5);

    // set up the layout
    setLayout(qhBox);

    */
}

Widget::~Widget()
{
    delete ui;
}
