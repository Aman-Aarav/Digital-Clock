#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    a.setApplicationName("Digital Clock");
    w.setWindowTitle("Digital Clock");
    w.showMaximized();
    w.show();
    return a.exec();
}
