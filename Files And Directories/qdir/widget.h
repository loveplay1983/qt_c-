#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QFileDialog>
#include <QString>
#include <QDir>
#include <QDebug>
#include <QMessageBox>
#include <QFileInfo>

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
    void on_choosedir_clicked();

    void on_createdir_clicked();

    void on_direxist_clicked();

    void on_dirorfile_clicked();

    void on_dircontent_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
