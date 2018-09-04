#include "mainwindow.h"
#include <QPushButton>
#include <QDebug>
#include <QMenuBar>
#include <QStatusBar>
#include <QAction>
#include <QApplication>
#include <QMenu>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    // add central widget
    QPushButton *btn1 = new QPushButton("Hello", this);
    setCentralWidget(btn1);

    // declare quit action
    QAction *quitAction = new QAction("Quit", this);
    // connect by lambdas
    /*
    connect(quitAction, &QAction::triggered, [=](){
        QApplication::quit();
    });
    */

    // connect by SIGNAL and SLOT
    connect(quitAction, SIGNAL(triggered()), this, SLOT(close()));


    // add menus
    QMenu *fileMenu = menuBar()->addMenu("File");
    fileMenu->addAction(quitAction);

    menuBar()->addMenu("Edit");
    menuBar()->addMenu("Window");
    menuBar()->addMenu("Settings");
    menuBar()->addMenu("Help");

    // add status bar message
    statusBar()->showMessage("Qt programming...", 3000); // disappear after 3 seconds
//    statusBar()->clearMessage();


}

MainWindow::~MainWindow()
{

}

QSize MainWindow::sizeHint() const
{
    return QSize(800, 500);

}
