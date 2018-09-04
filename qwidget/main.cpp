#include "rockwidget.h" // widget header file
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    RockWidget w;
    w.setWindowTitle("Hello world");



    w.show();

    return a.exec();
}
