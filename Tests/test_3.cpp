#include "test_3.h"

void test_3() {
    STL *stl = new STL("/home/alexej/Desktop/cube.stl");
    std::vector<Triangle> *t = stl->getTriangles();

    qDebug() << "Test 3 **********************************";
    for (int i = 0; i < t->size(); i++) {
        qDebug() << "#" << i;
        t->at(i).print();
    }
}
