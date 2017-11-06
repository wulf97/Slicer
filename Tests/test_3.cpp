#include "test_3.h"

void test_3() {
    STL *stl = new STL("/home/alexej/Documents/labs/Slicer/cube.stl");
    std::vector<Triangle> *v = stl->getTriangles();

    qDebug() << "Test 3 **********************************";
    for (int i = 0; i < v->size(); i++) {
        qDebug() << "#" << i;
        v->at(i).print();
    }
}
