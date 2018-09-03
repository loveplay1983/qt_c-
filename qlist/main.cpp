#include <QCoreApplication>
#include <iostream>
#include <QDebug>
#include <QList>

using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // QList
    QList<QString> stringList;

    // put data into the list
    stringList << "Qt is" << " nice " << "framework!";
    stringList.append(" Do you like it???");
    stringList.insert(1," a");


    // get the data form the list
    qDebug() << stringList;
    qDebug() << "number of items in the list : " << stringList.count();

    // loop through the list
    for (int i = 0; i < stringList.count();i++)
    {
        qDebug() << "The element at index" << QString::number(i) << " is =>" << stringList.at(i);
    }


    return a.exec();
}
