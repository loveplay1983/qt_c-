#include "widget.h"
#include "ui_widget.h"
#include <QInputDialog>
#include <QDebug>
#include <QStringList>
#include <QString>

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
    /*
    bool ok;
    double d = QInputDialog::getDouble(this, tr("QInputDialog::getDouble()"),
                                       tr("Amount:"), 37.56, -10000, 10000, 2, &ok);
    if (ok)
        qDebug() << "Double val =>" << QString::number(d);
        */

    QStringList items;
    items << tr("test1") << tr("test2") << tr("test3") << tr("test4");

    bool ok;
    QString item = QInputDialog::getItem(this, tr("QInputDialog::getItem()"),
                                       tr("test:"), items, 0, false, &ok);
    if (ok)

        qDebug() << "item val =>" << item;
}
