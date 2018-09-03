#include "widget.h"
#include "ui_widget.h"
#include <QButtonGroup>
#include <QDebug>
#include <QApplication>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    // set buttons to be exclusive
    QButtonGroup *btnGrp = new QButtonGroup(this);
    btnGrp->addButton(ui->windows);
    btnGrp->addButton(ui->linux);
    btnGrp->addButton(ui->mac);

    btnGrp->setExclusive(true); // setExclusive set true, or all the options will be effective

    // call the widget::close() method to quit the widget
    connect(ui->quit, SIGNAL(clicked()), this, SLOT(close()));
}

Widget::~Widget()
{
    delete ui;
}
void Widget::on_windows_toggled(bool checked)
{
    if(checked)
    {
        qDebug() << "windows option is checked";
    }else
    {
        qDebug() << "windows option is unchecked";
    }
}

void Widget::on_all_drink_clicked()
{
    if(ui->bear->isChecked() && ui->juice->isChecked() && ui->coffee->isChecked())
    {
        ui->bear->setChecked(false);
        ui->juice->setChecked(false);
        ui->coffee->setChecked(false);
    }else
    {
        ui->bear->setChecked(true);
        ui->juice->setChecked(true);
        ui->coffee->setChecked(true);
    }
}





