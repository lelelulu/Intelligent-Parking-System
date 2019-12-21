#include "mywidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MyWidget w;
    QPalette palette(w.palette());
    palette.setColor(QPalette::Background, Qt::lightGray);
    w.show();

    return a.exec();
}
