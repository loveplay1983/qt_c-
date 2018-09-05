#ifndef INFODIA_H
#define INFODIA_H

#include <QDialog>

namespace Ui {
class infoDia;
}

class infoDia : public QDialog
{
    Q_OBJECT

public:
    explicit infoDia(QWidget *parent = 0);
    ~infoDia();

private:
    Ui::infoDia *ui;
};

#endif // INFODIA_H
