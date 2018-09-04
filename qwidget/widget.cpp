#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) : QWidget(parent), ui(new Ui::Widget)
{
    /***********************************************************************
     * https://stackoverflow.com/questions/5692991/qt-setupui
     *
     * setupUi() creates the actual instances of widgets for you. A form
     * that you create in QtDesigner is stored just as XML file. So to be
     * able to build the actual "window" with all the elements that you put
     * on it in QtDesigner and display it in your application, setupUi() is
     * created for you automatically by UIC (UI compiler - a Qt tool) so you
     * don't have to do that manually. All the properties that you set in
     * QtDesigner and all elements you put there will be "translated" in C++ code

    * like this:
    QLabel *label1 = new QLabel(tr("Start"), this);
    QTableView *view1 = new QTableView(this);
     *
     ***************************************************************************/
    ui->setupUi(this);

    ui->btn1->setText("Changed text");
}

Widget::~Widget()
{
    delete ui;
}
