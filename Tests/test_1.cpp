#include "test_1.h"
#include <QDebug>

void test_1() {
    Vertix *v1 = new Vertix(1, 1, 1);
    Vertix *v2 = new Vertix(2, 2, 2);
    Vertix *v3 = new Vertix(*v1);
    Vertix *v4 = new Vertix();

    v4 = v2;
   // v3 = v1;

    qDebug() << "Test 1 **********************************";
    qDebug() << "#1 v1(1, 1, 1)";
    v1->print();

    qDebug() << "#2 v2(2, 2, 2)";
    v2->print();

    qDebug() << "#3 v3(v1)";
    v3->print();

    qDebug() << "#4 v4 = v2";
    v4->print();

    qDebug() << "#5 v1 == v2 : false";
    qDebug() << (v1 == v2);

    qDebug() << "#6 v1 == v3 : true";
    qDebug() << (v1 == v3);
}
