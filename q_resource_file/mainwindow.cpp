#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/images/minions.png");
    ui->label->setPixmap(pix.scaled(320,300));

    this->setMaximumSize(800, 320);
}

//QSize MainWindow::sizeHint() const
//{
//    return QSize(500,320);
//}

MainWindow::~MainWindow()
{
    delete ui;
}
