#include "rockwidget.h"
#include <QLabel> // ui component label
#include <QPushButton> // pushbutton
#include <QMessageBox>

RockWidget::RockWidget(QWidget *parent) : QWidget(parent)
{
//    setWindowTitle("Rock Widget Here");


    QLabel *label = new QLabel("This is my label", this);

    // add  a styled widget and move it around

    // font
    QFont lbl1Font("Times", 20, QFont::Bold);
    // color
    QPalette lbl1Palette;
    lbl1Palette.setColor(QPalette::Window, Qt::yellow);
    lbl1Palette.setColor(QPalette::WindowText, Qt::blue);

    QLabel *lbl1 = new QLabel(this);

    lbl1->setAutoFillBackground(true);
    lbl1->setText("My colored label");
    lbl1->setFont(lbl1Font);
    lbl1->setPalette(lbl1Palette);
    lbl1->move(0, 50);

    // add another label
    QPalette lbl2Palette;
    lbl2Palette.setColor(QPalette::Window, Qt::green);
    lbl2Palette.setColor(QPalette::WindowText, Qt::black);

    // lbl2 font
    QFont lbl2Font("Times", 30, QFont::Bold);

    QLabel *lbl2 = new QLabel(this);
    lbl2->setAutoFillBackground(true);
    lbl2->setPalette(lbl2Palette);
    lbl2->setText("My colored label 2");
    lbl2->setFont(lbl2Font);
    lbl2->move(0, 150);

    // add button and connect to slot
    QFont btn1Font("Times", 30, QFont::Bold);
    QPushButton *btn1 = new QPushButton(this);
    btn1->setText("Click me");
    btn1->setFont(btn1Font);
    btn1->move(100, 250);
    //connect btn1 to messagebox by signal to slot method
    connect(btn1, SIGNAL(clicked()), this, SLOT(btn1Clicked()));


}

// slot method for btn1 clicked event
void RockWidget::btn1Clicked()
{
    QMessageBox::information(this, "Warning!!!", "You clicked the btn1");
}

QSize RockWidget::sizeHint() const
{
    /*This means the method is const, and means the method will not modify any members, it can thus be used in a setting where the object is const.*/
    return QSize(500,500);
}

