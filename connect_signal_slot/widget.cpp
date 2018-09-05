#include "widget.h"
#include "ui_widget.h"
#include <QDebug>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    /*
    // string notation
    connect(ui -> btn1, SIGNAL(clicked()),
            this,SLOT(changeText()));
    */

    // functor notation
//        connect(ui -> btn1, &QPushButton::clicked,this,&Widget::changeText);

    // functor notation lambda
    connect(ui->btn1,&QPushButton::clicked,[=]()
    {
        ui->text1->setText("lambda");
    });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeText()
{
    qDebug() << "user clicked on button." << endl;
    ui -> text1 -> setText("Hello world");
}
