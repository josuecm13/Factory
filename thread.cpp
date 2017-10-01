#include "thread.h"
#include <QtCore>
#include <QDebug>

Thread::Thread()
{

}

void Thread::run() {

    while (true) {
       qDebug() << "Vamos a mamar " << this->nombre;
        sleep(1);
    }

}
