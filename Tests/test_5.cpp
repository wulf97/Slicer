#include "test_5.h"

void test_5() {
    STL *stl = new STL("/home/alexej/Desktop/cube.stl");
    std::vector<Triangle> *t = stl->getTriangles();

    NodeGraph *n = new NodeGraph(t);

    qDebug() << "Test 5 **********************************";

}
