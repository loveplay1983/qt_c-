#include "widget.h"
#include "ui_widget.h"
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QIODevice>

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

void Widget::on_write_clicked()
{
    // save file to disk
    QString filename = QFileDialog::getSaveFileName(this, "Save as...");
    if ( filename.isEmpty()) { return; }

    QFile file(filename);

    // open the file
    if( !file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append)) { return; }

    QTextStream out(&file);  // think of the cout in standard output
    out << ui->textEdit->toPlainText() << "\n";
    file.close();  // after the open operations is done the file must be closed

}

void Widget::on_read_clicked()
{
    QString fileContent;  // fileContent for storing the text content read from file object
    // save file to disk
    QString filename = QFileDialog::getOpenFileName(this, "Open file...");

    if(filename.isEmpty()) { return; }

    QFile file(filename);

    if(!file.open(QIODevice::ReadOnly | QIODevice:: Text)) { return; }

    QTextStream in(&file);
    QString line = in.readLine();

    while(!line.isNull())
    { fileContent.append(line); line = in.readLine(); }

    file.close();

    ui->textEdit->clear(); // clear up previous displaying text
    ui->textEdit->setPlainText(fileContent); // read text from file object and display it

}

void Widget::on_select_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, "Choose file...");
    if(filename.isEmpty()) { return; }
    ui->lineEdit->setText(filename);
}

void Widget::on_copy_clicked()
{
    QString srcFilename = ui->lineEdit->text();
    QString destFilename = ui->lineEdit_2->text();

    if (srcFilename.isEmpty() || destFilename.isEmpty()) { return; }

    QFile file(srcFilename);
    if(file.copy(destFilename)) { QMessageBox::information(this, "Success", "Copy successfully!");}
    else { QMessageBox::information(this, "Failure", "Copy failed!!!"); }
}
