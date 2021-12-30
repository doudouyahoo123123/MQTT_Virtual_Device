#ifndef THREAD_H
#define THREAD_H

#include <QObject>
#include <QThread>

class Thread: public QThread
{
    Q_OBJECT
public:
    Thread(QObject* parent = nullptr);
    virtual void run();

signals:
    void publish_signal();
};

#endif // THREAD_H
