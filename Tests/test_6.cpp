#include "test_6.h"

void test_6() {
    STL *stl = new STL("/home/alexej/Desktop/cube.stl");
    //STL *stl = new STL("/home/alexej/Downloads/der.STL");
    std::vector<Triangle> *t = stl->getTriangles();

    NodeGraph *n = new NodeGraph(t);
    Cut *cut = new Cut(n, 1);

}
