#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);


    //string notation
//    connect(ui->hSlider,SIGNAL(valueChanged(int)),
//            ui->proBar,SLOT(setValue(int))
//            );


    // functor notation
//    connect(ui->hSlider,&QSlider::valueChanged,
//            ui->proBar,&QProgressBar::setValue);

    // functor notation lambadas
    connect(ui->hSlider,&QSlider::valueChanged,
            [=](){
        ui->proBar->setValue(ui->hSlider->value());
    });


}

Widget::~Widget()
{
    delete ui;
}
