#include "Equipment.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Equipment w;
    w.setWindowTitle(QString::fromLocal8Bit("Ӧ������װ��"));
    w.showMaximized();
    return a.exec();
}
