#include "mainwindow.h"
#include <QApplication>
#include "thread.cpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.show();

    Thread h;
    h.nombre = "pene";
    h.start();

    return a.exec();
}
