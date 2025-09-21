#include "qt_project1.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qt_project1 w;
    w.show();
    return a.exec();
}
