#ifndef INFODIALOG_H
#define INFODIALOG_H

#include <QDialog>

namespace Ui {
class InfoDialog;
}

class InfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InfoDialog(QWidget *parent = 0);
    ~InfoDialog();

    QString getPosition() const;

    QString getFavouriteOS() const;

private slots:


    void on_ok_clicked();

    void on_cancel_clicked();

private:
    Ui::InfoDialog *ui;
    QString position;
    QString favouriteOS;

};

#endif // INFODIALOG_H
