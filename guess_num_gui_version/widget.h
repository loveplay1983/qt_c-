#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
private slots:
    void on_guessButton_clicked();


    void on_playAgain_clicked();

private:
    Ui::Widget *ui;
    int secretNum, guessNum;
};

#endif // WIDGET_H
