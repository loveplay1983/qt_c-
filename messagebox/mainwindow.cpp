#include "mainwindow.h"
#include <QPushButton>
#include <QMessageBox>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QPushButton *btn1 = new QPushButton(this);
    btn1->setText("Click Me");
    btn1->move(150, 100);
    connect(btn1,&QPushButton::clicked,[=](){

        /*
        // messagebox the hard way
        QMessageBox message;
        message.setMinimumSize(400, 300);
        message.setMaximumSize(800, 600);
        message.setWindowTitle("QT Study");
        message.setText("#include <Hello world, I love C++>");
        message.setInformativeText("QMessageBox is an importnat component of QT framework");
//        message.setIcon(QMessageBox::Critical);
        message.setIcon(QMessageBox::Warning);
        message.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        message.setDefaultButton(QMessageBox::Cancel);

        int msg_ret = message.exec();
        */

        // easier way
        // critical message
//        int msg_ret = QMessageBox::critical(this,"Title","QT programming for fun",
//                                            QMessageBox::Ok | QMessageBox::Cancel);
        // information message
//        int msg_ret = QMessageBox::information(this,"Title","QT programming for fun",
//                                            QMessageBox::Ok | QMessageBox::Cancel);
        // question message
//        int msg_ret = QMessageBox::question(this,"Title","QT programming for fun",
//                                            QMessageBox::Ok | QMessageBox::Cancel);

        // warning message
        int msg_ret = QMessageBox::warning(this,"Title","QT programming for fun",
                                            QMessageBox::Ok | QMessageBox::Cancel);

        if (msg_ret == QMessageBox::Ok)
        {
            qDebug() << "OK is clicked";
        }
        if (msg_ret == QMessageBox::Cancel)
        {
            qDebug() << "Cancel is clicked";
        }

    });
}

MainWindow::~MainWindow()
{

}

QSize MainWindow::sizeHint() const
{
    return QSize(400, 300);
}
