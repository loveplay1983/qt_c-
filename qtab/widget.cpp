#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QVBoxLayout>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    /******************configure the tab items manually  ************************/
    // declare the widget
    QWidget *widget = new QWidget(this);

    // declare the layout for the widget
    QVBoxLayout *layout = new QVBoxLayout();

    layout->addWidget(new QPushButton("btn1", this));
    layout->addWidget(new QPushButton("btn2", this));
    layout->addWidget(new QPushButton("btn3", this));

    QPushButton *btn4 = new QPushButton("btn4", this);
    connect(btn4, &QPushButton::clicked, [=]{
        qDebug() << "btn4 from custom tab clicked.";
    });
    layout->addWidget(btn4);
    layout->addSpacerItem(new QSpacerItem(100, 400));

    // set layout for widget
    widget->setLayout(layout);

    // add the widget to the tab widget and add to the new tab item
//    ui->tabWidget->addTab(widget, "Tab 4");
    ui->tabWidget->insertTab(1, widget, "Tab 4");

}

Widget::~Widget()
{
    delete ui;
}



void Widget::on_tab_btn_clicked()
{
    qDebug() << "Tab 1 is clicked.";
}
