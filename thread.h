#ifndef THREAD_H
#define THREAD_H
#include <QtCore>

class Thread : public QThread
{
public:
    Thread();
    void run();
    QString nombre;
};

#endif // THREAD_H
