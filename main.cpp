#include <iostream>
#include <qmainwindow.h>
#include "cmake-build-debug/mainwindow.h"
#include <QApplication>

using namespace std;
int main(int argc, char** argv){
    QApplication app (argc,argv);
    SQLClientWindow wind;

    wind.show();
return app.exec();
}
