#include "infodia.h"
#include "ui_infodia.h"

infoDia::infoDia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::infoDia)
{
    ui->setupUi(this);
}

infoDia::~infoDia()
{
    delete ui;
}
