#ifndef CUSTOMDIA_H
#define CUSTOMDIA_H

#include <QDialog>

namespace Ui {
class customDia;
}

class customDia : public QDialog
{
    Q_OBJECT

public:
    explicit customDia(QWidget *parent = 0);
    ~customDia();

private:
    Ui::customDia *ui;
};

#endif // CUSTOMDIA_H
