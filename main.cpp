#include "mainwindow.h"
#include <QApplication>
#include "thread.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.show();

    Thread hilo;
    hilo.nombre = "La Progra";
    hilo.start();


    return a.exec();
}
