#include "widget.h"
#include "ui_widget.h"
#include <iostream>
#include <QMessageBox>
#include <QString>
#include <QDebug>

using namespace std;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->combo->addItem("Earth");
    ui->combo->addItem("Venus");
    ui->combo->addItem("Mars");
    ui->combo->addItem("Pluton");
    ui->combo->addItem("Saturn");

    // make the combo editable
    ui->combo->setEditable(true);

    /*
    connect(ui->captureval,&QPushButton::clicked,[=]{
        QMessageBox msg;
        msg.setMinimumSize(400, 300);
        msg.setWindowTitle("Capture value");
        msg.setText(ui->combo->currentText());
        msg.setIcon(QMessageBox::Warning);
        msg.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);

        msg.exec();

    });
    */
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_captureval_clicked()
{
    cout << endl;
    qDebug() << "current item =>" << ui->combo->currentText();
    qDebug() << "current index =>" << QString::number(ui->combo->currentIndex());
}

void Widget::on_getval_clicked()
{
    cout << "The combo has " << ui->combo->count() << " elements" << endl;
//    qDebug() << "The combo has " << QString::number(ui->combo->count()); << " elements";
    for (int i = 0; i < ui->combo->count(); i++)
    {
        qDebug() << "index " << QString::number(i) << "=>" << ui->combo->itemText(i);
    }
}
