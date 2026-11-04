#include "agvhmi.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    agvHMI w;
    w.show();
    return a.exec();
}
