#ifndef INFO_H
#define INFO_H

#include <QDialog>
#include <QAbstractButton>
#include <QDebug>

namespace Ui {
class info;
}

class info : public QDialog
{
    Q_OBJECT

public:
    explicit info(QWidget *parent = 0);
    ~info();

private slots:
    void on_btnbox_clicked(QAbstractButton *button);

private:
    Ui::info *ui;
};

#endif // INFO_H
