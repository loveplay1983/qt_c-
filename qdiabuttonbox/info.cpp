#include "info.h"
#include "ui_info.h"


info::info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::info)
{
    ui->setupUi(this);
}

info::~info()
{
    delete ui;
}

void info::on_btnbox_clicked(QAbstractButton *button)
{
    QDialogButtonBox::StandardButton stdBtn = ui->btnbox->standardButton(button);
    if(stdBtn == QDialogButtonBox::Ok)
    {
//        qDebug() << "ok";
        accept();
    }
    if(stdBtn == QDialogButtonBox::Cancel)
    {
//        qDebug() << "Canceled";
        reject();
    }
}
