#include "widget.h"
#include "ui_widget.h"
#include <stdlib.h>  // srand, rand
#include <time.h>  // time
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    // Initialize game info
    srand(time(NULL));

    // Generate (1 - 10)
    secretNum = rand() % 10 + 1;

    // disable the play agian button
    ui -> playAgain -> setDisabled(true);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_guessButton_clicked()
{
    guessNum = ui -> numOption -> value();
    qDebug() << "Secret number is: " << QString::number(secretNum);
    qDebug() << "Guess number is: " << QString::number(guessNum);


    if (guessNum == secretNum)
    {
        // grats
        ui -> result -> setText("Grats, number is : " + QString::number(secretNum));

        // disable the guess button after the right number is guessed
        ui -> guessButton -> setDisabled(true);
        ui -> playAgain-> setDisabled(false);

    }else
    {
        if(guessNum < secretNum)
        {
            ui -> result -> setText("number is too low");
        }
        if (guessNum > secretNum && guessNum > 0)
        {
            ui -> result -> setText("number is too high");
        }

    }

}

void Widget::on_playAgain_clicked()
{
    // enable the guess button
    ui -> guessButton -> setDisabled(false);

    // set the spinbox numOption back to 1
    ui -> numOption -> setValue(1);

    // regenerate the random number
    secretNum = rand() % 10 + 1;

    // clear the result message
    ui -> result -> setText("");

}
