#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QList>
#include <QColor>
#include <QPushButton>
#include <QString>
#include <QSettings>
#include <QColorDialog>
#include <QVariant>

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
    void on_btn1_clicked();
    void on_btn2_clicked();
    void on_btn3_clicked();
    void on_btn4_clicked();
    void on_btn5_clicked();
    void on_btn6_clicked();
    void on_btn7_clicked();
    void on_btn8_clicked();
    void on_btn9_clicked();

    void on_save_clicked();
    void on_load_clicked();

private:
    Ui::Widget *ui;

    QList<QColor> colorList;
    void changeColor(int index, QPushButton *button);

    void saveColor(QString key, QColor color);
    QColor loadColor(QString key);
    void setLoadColor(QString key, int index, QPushButton *button);
};

#endif // WIDGET_H
