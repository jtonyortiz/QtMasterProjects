#include "rockwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RockWidget w;
    //Setting title from the main function:
    w.setWindowTitle("Rock Widget Here");
    w.show();

    return a.exec();
}
