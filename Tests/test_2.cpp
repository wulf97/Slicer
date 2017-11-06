#include "test_2.h"

void test_2() {
    Vertix *v1 = new Vertix(0, 0, 0);
    Vertix *v2 = new Vertix(0, 1, 0);
    Vertix *v3 = new Vertix(0, 1, 1);

    Triangle *t1 = new Triangle(*v1, *v2, *v3);
    Triangle *t2 = new Triangle(*t1);
    Triangle *t3 = new Triangle();

    t3 = t1;

    qDebug() << "Test 2 **********************************";
    qDebug() << "#1 t1((0,0,0),(0,1,0),(0,1,1))";
    t1->print();
    qDebug() << "#2 t2(t1)";
    t2->print();
    qDebug() << "#3 t3 = t1";
    t3->print();
}
