#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    for(int i = 0; i < 9; i++)
    {
        //        colorList[i] = Qt::black; //qt doesn't support this kind of assignment
        colorList.append(Qt::black);
    }
}

Widget::~Widget()
{
    delete ui;
}

/**************change color function***********/

void Widget::changeColor(int index, QPushButton *button)
{
    QColor color = QColorDialog::getColor(colorList[index], this, "Choose background color");
    if (color.isValid())
    {
        // assign color value to the color list element and store it in the memory
        colorList[index] = color;

        // define and configure the color by css style
        QString css = QString("background-color: %1").arg(color.name());
        button->setStyleSheet(css);
    }
}

/**************  9 buttons *****************/
void Widget::on_btn1_clicked()
{
    Widget::changeColor(0, ui->btn1);
}

void Widget::on_btn2_clicked()
{
    Widget::changeColor(1, ui->btn2);
}

void Widget::on_btn3_clicked()
{
    Widget::changeColor(2, ui->btn3);
}

void Widget::on_btn4_clicked()
{
    Widget::changeColor(3, ui->btn4);
}

void Widget::on_btn5_clicked()
{
    Widget::changeColor(4, ui->btn5);
}

void Widget::on_btn6_clicked()
{
    Widget::changeColor(5, ui->btn6);
}
void Widget::on_btn7_clicked()
{
    Widget::changeColor(6, ui->btn7);
}

void Widget::on_btn8_clicked()
{
    Widget::changeColor(7, ui->btn8);
}

void Widget::on_btn9_clicked()
{
    Widget::changeColor(8, ui->btn9);
}

/*************    save and load **************/

void Widget::on_save_clicked()
{
    saveColor("btn1", colorList[0]);
    saveColor("btn2", colorList[1]);
    saveColor("btn3", colorList[2]);
    saveColor("btn4", colorList[3]);
    saveColor("btn5", colorList[4]);
    saveColor("btn6", colorList[5]);
    saveColor("btn7", colorList[6]);
    saveColor("btn8", colorList[7]);
    saveColor("btn9", colorList[8]);
}

void Widget::on_load_clicked()
{
    setLoadColor("btn1", 0, ui->btn1);
    setLoadColor("btn2", 1, ui->btn2);
    setLoadColor("btn3", 2, ui->btn3);
    setLoadColor("btn4", 3, ui->btn4);
    setLoadColor("btn5", 4, ui->btn5);
    setLoadColor("btn6", 5, ui->btn6);
    setLoadColor("btn7", 6, ui->btn7);
    setLoadColor("btn8", 7, ui->btn8);
    setLoadColor("btn9", 8, ui->btn9);
}

void Widget::saveColor(QString key, QColor color)
{
    int red = color.red();
    int green = color.green();
    int blue = color.blue();

    QSettings settings("computerEdiot", "qsettings");
    settings.beginGroup("buttonColor");
    settings.setValue(key + "r", red);
    settings.setValue(key + "g", green);
    settings.setValue(key + "b", blue);
    settings.endGroup();
}

QColor Widget::loadColor(QString key)
{
    int red;
    int green;
    int blue;

    QSettings settings("computerEdiot", "qsettings");
    settings.beginGroup("buttonColor");
    red = settings.value(key + "r", QVariant(0)).toInt();
    green = settings.value(key + "g", QVariant(0)).toInt();
    blue = settings.value(key + "b", QVariant(0)).toInt();
    settings.endGroup();

    return QColor(red, green, blue);
}

void Widget::setLoadColor(QString key, int index, QPushButton *button)
{
    QColor color = loadColor(key);
    colorList[index] = color;

    QString css = QString("background-color: %1").arg(color.name());
    button->setStyleSheet(css);
}
