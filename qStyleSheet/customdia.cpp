#include "customdia.h"
#include "ui_customdia.h"

customDia::customDia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customDia)
{
    ui->setupUi(this);

    // set up stylesheet for specific widget
//    ui->pushButton->setStyleSheet("background-color: red");
    ui->diaBtn->setStyleSheet("QPushButton{background-color: gray; color: white;}");
}

customDia::~customDia()
{
    delete ui;
}
