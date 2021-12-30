#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.setWindowTitle("虚拟传感器上报华为云");
    w.show();

    return a.exec();
}
