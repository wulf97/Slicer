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
    //MainWindow window;
    //window.show();

    //STL *stl = new STL("/home/alexej/Documents/labs/Slicer/cube.stl");
    //std::vector<Triangle> *v = stl->getTriangle();

    //Cut *cut = new Cut();

    //cut->cutTriangle(&(v->at(11)), 0);

    Test *test = new Test();
    test->init();


    return app.exec();
}
