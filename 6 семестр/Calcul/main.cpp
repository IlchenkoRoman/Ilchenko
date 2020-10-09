#include <QApplication>
#include "window.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Window mainApp;
    mainApp.show();
    return a.exec();
}
