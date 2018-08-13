#include "headers/gamelisttracker.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GameListTracker w;
    w.show();

    return a.exec();
}
