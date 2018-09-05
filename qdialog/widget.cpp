#include "widget.h"
#include "ui_widget.h"
#include "infodialog.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent, Qt::WindowSystemMenuHint | Qt::WindowTitleHint),
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
    InfoDialog *dialog = new InfoDialog(this);


    // show the dialog in model form
    // return the dialog execution code

    if (false)
    {
        int diaCode = dialog->exec();    // opposite to dialog->show() with non-model form
        if (diaCode == QDialog::Accepted)
        {
            QString position = dialog->getPosition();
            QString os = dialog->getFavouriteOS();

            ui->info->setText("Your position => " + position + "\nYou favourite os => " + os);
        }else
        {
            qDebug() << "Dialog rejected.";
        }

    }

    // show the dialog in non-model form
    if (true)
    {
        connect(dialog, &InfoDialog::accepted, [=]{

            QString position = dialog->getPosition();
            QString os = dialog->getFavouriteOS();

            ui->info->setText("Your position => " + position + "\nYou favourite os => " + os);
        });

        connect(dialog, &InfoDialog::rejected, [=]{
            qDebug() << "Dialog rejected.";
        });

        // show dialog
        dialog->show();
        dialog->raise();
        dialog->activateWindow();
    }
}
