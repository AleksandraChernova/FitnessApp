#include "mainwindow.h"
#include "secondwindow.h"
#include "secondwindow2.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}