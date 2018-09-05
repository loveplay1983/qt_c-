#include "infodialog.h"
#include "ui_infodialog.h"
#include <QDebug>

InfoDialog::InfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfoDialog)
{
    ui->setupUi(this);
}

InfoDialog::~InfoDialog()
{
    delete ui;
}



void InfoDialog::on_ok_clicked()
{
    QString userPos = ui->pos_lineedit->text();
    if ( !userPos.isEmpty())
    {
        position = userPos;

        if (ui->win->isChecked())
        {
            favouriteOS = "Windows";
        }

        if (ui->win->isChecked())
        {
            favouriteOS = "Mac";
        }

        if (ui->win->isChecked())
        {
            favouriteOS = "Linux";
        }

    }

    // accept the dialog
//    qDebug() << "Favourite OS => " << favouriteOS << "\n" << "Location => " << position << "\n";
    accept();

}

void InfoDialog::on_cancel_clicked()
{
    // reject the dialog
    reject();

}

QString InfoDialog::getFavouriteOS() const
{
    return favouriteOS;
}

QString InfoDialog::getPosition() const
{
    return position;
}
