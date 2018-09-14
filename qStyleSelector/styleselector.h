#ifndef STYLESELECTOR_H
#define STYLESELECTOR_H

#include <QDialog>

namespace Ui {
class styleSelector;
}

class styleSelector : public QDialog
{
    Q_OBJECT

public:
    explicit styleSelector(QWidget *parent = 0);
    ~styleSelector();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::styleSelector *ui;
};

#endif // STYLESELECTOR_H
