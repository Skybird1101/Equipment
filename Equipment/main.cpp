#include "Equipment.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Equipment w;
    w.setWindowTitle(QString::fromLocal8Bit("应力调试装置"));
    w.showMaximized();
    return a.exec();
}
