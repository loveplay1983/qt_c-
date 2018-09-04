#include "widget.h"
#include <QPushButton>
#include <QDebug>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QFont btn1Font("Times", 20, QFont::Bold);
    QPushButton *btn1 = new QPushButton("button1", this);
    btn1->setMinimumSize(200, 100);
    btn1->setFont(btn1Font);
    connect(btn1, &QPushButton::clicked, [=](){
        qDebug() << "btn1 clicked";
    });


    QFont btn2Font("Times", 20, QFont::Bold);
    QPushButton *btn2 = new QPushButton("button2", this);
    btn2->setMinimumSize(30, 100);
    btn2->setFont(btn2Font);
    btn2->move(205, 0);

    connect(btn2, &QPushButton::pressed, [=](){
        qDebug() << "btn2 pressed";
    });

    connect(btn2, &QPushButton::released, [=](){
        qDebug() << "btn2 released";
    });

}

Widget::~Widget()
{

}
