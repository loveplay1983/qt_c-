#include "widget.h"
#include <QPushButton>
#include <QLabel>
#include <QDebug>
#include <QLineEdit>
#include <QFont>
#include <iostream>

using namespace std;


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    // First name
    QLabel *firstNameLabel = new QLabel("First name", this);
    firstNameLabel->setMinimumSize(70,50);
    firstNameLabel->move(10, 10);

    QLineEdit *firstNameLineEdit = new QLineEdit(this);
    firstNameLineEdit->setMinimumSize(200, 40);
    firstNameLineEdit->move(100, 10);   // lineedit

    // Last name
    QLabel *lastNameLabel = new QLabel("Last name", this);
    lastNameLabel->setMinimumSize(70,50);
    lastNameLabel->move(10, 70);

    QLineEdit *lastNameLineEdit = new QLineEdit(this);
    lastNameLineEdit->setMinimumSize(200, 40);
    lastNameLineEdit->move(100, 70);  // lineedit


    // City
    QLabel *cityLabel = new QLabel("City", this);
    cityLabel->setMinimumSize(70, 50);
    cityLabel->move(10, 130);

    QLineEdit *cityLineEdit = new QLineEdit(this);
    cityLineEdit->setMinimumSize(200, 40);
    cityLineEdit->move(100, 130);   // lineedit

    // set default content
//    firstNameLabel->setText("First Name");
//    lastNameLineEdit->setText("Last Name");
//    cityLineEdit->setText("City Name");

    // set hit content   !!!
    firstNameLineEdit->setPlaceholderText("FirstName");
    lastNameLineEdit->setPlaceholderText("Last Name");
    cityLineEdit->setPlaceholderText("City Name");


    // font
    QFont buttonFont("Times", 20, QFont::Bold);
    QPushButton *btn1  = new QPushButton("Grab data", this);
    btn1->setFont(buttonFont);
    btn1->move(80, 190);


    connect(btn1, &QPushButton::clicked, [=](){
        QString firstName = firstNameLineEdit->text();
        QString lastName = lastNameLineEdit->text();
        QString cityName = cityLineEdit->text();

        if (!firstName.isEmpty() && !lastName.isEmpty() && !cityName.isEmpty())
        {
            // if all the fields are filled
            qDebug() << "first name: " << firstName;
            qDebug() << "last name: " << lastName;
            qDebug() << "city name: " << cityName;
        }else
        {
            qDebug() << "please fill out all the entries";
        }

    });


    // respond to signals from QLineEdits

    // cursorPositionChanged
//    connect(firstNameLineEdit, &QLineEdit::cursorPositionChanged,[=]{
//        qDebug() << "The current cursor position is :" << firstNameLineEdit->cursorPosition();
//    });

    // editingFinished
//    connect(firstNameLineEdit, &QLineEdit::editingFinished, [=]{
//        qDebug() << "firstNameLineEdit is done";
//    });

    // returnPressed
//    connect(lastNameLineEdit, &QLineEdit::returnPressed, [=]{
//        qDebug() << "lastNameLineEdit is done";
//    });

    // selectionChanged
    /*
    qint32 i = 0;
    connect(cityLineEdit, &QLineEdit::selectionChanged, [&]{
//       qDebug() << i ;
        cout << i << endl;

    });
    i += 1;
    */

    // textChanged
//    connect(lastNameLineEdit, &QLineEdit::textChanged, [=]{
//            qDebug() << "lastNameLineEdit is changed" << lastNameLineEdit->text();
//        });

    // textEdited
    connect(lastNameLineEdit, &QLineEdit::textEdited, [=]{
            qDebug() << "lastNameLineEdit is exited" << lastNameLineEdit->text();
        });



}

Widget::~Widget()
{

}
