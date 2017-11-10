#include <QApplication>

#include "MainWindow.h"
#include "Vertix.h"
#include "Triangle.h"
#include "STL.h"
#include "GL.h"
#include "Cut.h"
#include "Test.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    /*MainWindow window;
    window.show();*/

    Test *test = new Test();
    test->init();


    return app.exec();
}
