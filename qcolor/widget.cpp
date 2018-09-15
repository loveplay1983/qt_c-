#include "widget.h"
#include "ui_widget.h"
#include <QColorDialog>
#include <QDebug>
#include <QFontDialog>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->label->setAutoFillBackground(true);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_text_clicked()
{
    QPalette palette = ui->label->palette();
    QColor color = palette.color(QPalette::WindowText);
    QColor chosenColor =  QColorDialog::getColor(color, this, "Choose Text color");
    if (chosenColor.isValid())
    {
        palette.setColor(QPalette::WindowText, chosenColor);
        ui->label->setPalette(palette);
    }
    else
    {
        qDebug() << "Invalid color";
    }
}


void Widget::on_bg_clicked()
{
    QPalette palette = ui->label->palette();
    QColor color = palette.color(QPalette::Window);
    QColor chosenColor =  QColorDialog::getColor(color, this, "Choose Text color");
    if (chosenColor.isValid())
    {
        palette.setColor(QPalette::Window, chosenColor);
        ui->label->setPalette(palette);
    }
    else
    {
        qDebug() << "Invalid color";
    }
}

void Widget::on_font_clicked()
{
    bool ok;
      QFont font = QFontDialog::getFont(
                      &ok, QFont("Helvetica [Cronyx]", 10), this);
      if (ok) {
          // the user clicked OK and font is set to the font the user selected
          ui->label->setFont(font);
      } else {
          // the user canceled the dialog; font is set to the initial
          // value, in this case Helvetica [Cronyx], 10
      }
}
