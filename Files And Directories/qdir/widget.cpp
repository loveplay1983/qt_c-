#include "widget.h"
#include "ui_widget.h"

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

void Widget::on_choosedir_clicked()
{
    QString filename = QFileDialog::getExistingDirectory(this, "Choose folder");
    if (filename.isEmpty()) { return; }
    ui->lineEdit->setText(filename);
}

void Widget::on_createdir_clicked()
{
    // Create a dir if it doesn't exist already
    QString dirPath = ui->lineEdit->text();
    if (dirPath.isEmpty()) { return; }
    // create QDir object and pass the dirPath from lineEdit content to it
    QDir dir(dirPath);
    if( !dir.exists())
    {
        if(dir.mkpath(dirPath))
        {
            QMessageBox::information(this, "message", "directory created successfully.");
        }
    }else
    {
        QMessageBox::information(this, "message", "directory already exists");
    }
}

void Widget::on_direxist_clicked()
{
    // check whether the dir is already existed
    QString dirPath = ui->lineEdit->text();
    if(dirPath.isEmpty()) { return; }

    QDir dir(dirPath);
    if(dir.exists()) { QMessageBox::information(this, "Warning!!!", "Directory already exists"); }
    else{ QMessageBox::information(this, "Warning!!!", "Directory doesn't exist"); }

}

void Widget::on_dirorfile_clicked()
{
//    // clear the listwidget content before checking the content is dir or file
//    ui->listWidget->clear();
//    // check whether it is dir or file
//    QString dirPath = ui->lineEdit->text();
//    if(dirPath.isEmpty()) { return; }
//    QDir dir(dirPath);
//    // get he list of files and directories in the folder
//    QList<QFileInfo> fileList  = dir.entryInfoList();
//    for(int i = 0; i < fileList.size(); i++)
//    {
//        QString prefix;
//        if(fileList.at(i).isFile()) {prefix = "FILE: "; }
//        if(fileList.at(i).isDir()) { prefix = "DIRECTORY: "; }
//        ui->listWidget->addItem(prefix + fileList.at(i).absoluteFilePath());
//    }


    QFileInfo fileInfo(ui->listWidget->currentItem()->text());
    if(fileInfo.isDir()) { QMessageBox::information(this, "Message", "This is a folder");}
    else if(fileInfo.isFile()) { QMessageBox::information(this, "Message", "This is a file"); }
    else { QMessageBox::information(this, "Message", "What\'s is it???"); }

}

void Widget::on_dircontent_clicked()
{
    // clear the listwidget content before checking the content
    ui->listWidget->clear();

    // check whether it is dir or file
    QString dirPath = ui->lineEdit->text();
    if(dirPath.isEmpty()) { return; }
    QDir dir(dirPath);
    // get he list of files and directories in the folder
    QList<QFileInfo> fileList  = dir.entryInfoList();
    for(int i = 0; i < fileList.size(); i++)
    {
//        QString prefix;
//        if(fileList.at(i).isFile()) {prefix = "FILE: "; }
//        if(fileList.at(i).isDir()) { prefix = "DIRECTORY: "; }
//        ui->listWidget->addItem(prefix + fileList.at(i).absoluteFilePath());
        ui->listWidget->addItem(fileList.at(i).absoluteFilePath());
    }
}
