#include "styleselector.h"
#include "ui_styleselector.h"

styleSelector::styleSelector(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::styleSelector)
{
    ui->setupUi(this);
}

styleSelector::~styleSelector()
{
    delete ui;
}

void styleSelector::on_pushButton_2_clicked()
{
    QWidget::close();
}
