#include "test_5.h"
#include <ctime>

void test_5() {
    STL *stl = new STL("/home/alexej/Desktop/cube.stl");
    //STL *stl = new STL("/home/alexej/Downloads/der.STL");
    std::vector<Triangle> *t = stl->getTriangles();

    int time = clock();
    NodeGraph *n = new NodeGraph(t);
    qDebug() << "msec: " <<(clock() - time);

    qDebug() << "Test 5 **********************************";
    n->print();
    qDebug() << "***********************";
    n->printSet();
}
