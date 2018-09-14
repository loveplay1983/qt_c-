#include "widget.h"
#include "ui_widget.h"
#include <QPalette>
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    // retrieve the palette for the label
    QPalette palette = ui->label->palette();
    ui->label->setAutoFillBackground(true);

    // modify the palette with our changes
    palette.setColor(QPalette::Window, Qt::blue);
    palette.setColor(QPalette::WindowText, Qt::red);

    // reset the palette to the widget
    ui->label->setPalette(palette);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_enable_clicked()
{
    QPalette::ColorGroup enableBtnColorGrp = ui->enable->palette().currentColorGroup();
    QPalette::ColorGroup disableBtnColorGrp = ui->enable->palette().currentColorGroup();

    qDebug() << "Active button color group: " << enableBtnColorGrp;
    qDebug() << "Disabled button color group: " << disableBtnColorGrp;
}

