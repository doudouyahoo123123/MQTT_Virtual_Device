#include "thread.h"

Thread::Thread(QObject *parent)
{

}

void Thread::run()
{
  while(true)
    {
      emit publish_signal();
      sleep(30);
    }
}
