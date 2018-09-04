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
    // what is explicit
    // https://stackoverflow.com/questions/121162/what-does-the-explicit-keyword-mean
    /*
     * The compiler is allowed to make one implicit conversion to resolve the parameters to a function. What
     * this means is that the compiler can use constructors callable with a single parameter to convert from
     * one type to another in order to get the right type for a parameter.
     */


    /*
    https://stackoverflow.com/questions/10591059/meaning-of-qwidget-parent-0-in-constructor-myclassqwidget-
parent-0

    Meaning of (QWidget *parent = 0) in constructor MyClass(QWidget *parent = 0);

    */
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
