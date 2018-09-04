#ifndef ROCKWIDGET_H
#define ROCKWIDGET_H

#include <QObject>
#include <QWidget>

class RockWidget : public QWidget
{
    Q_OBJECT
public:
    explicit RockWidget(QWidget *parent = 0);

signals:

public slots:

private slots:
    void btn1Clicked();

private:
    /*
When you add the const keyword to a method the this pointer will essentially become a pointer to const object, and you cannot therefore change any member data. (Unless you use mutable, more on that later).*/
    QSize sizeHint() const;
};

#endif // ROCKWIDGET_H
