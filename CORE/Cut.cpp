#include "Cut.h"

Cut::Cut() {

}

PolyLine Cut::cutTriangle(Triangle *t, int z) {
    PolyLine polyLine;
    Vertix min, max;
    Vertix v[3];

    t->print();
    for (int i = 0; i < 3; i++) {
        //v[i] = t->get(i);
    }

    min = this->getMin(v);
    max = this->getMax(v);

    if (z >= min.getZ() && z <= max.getZ()) {
         qDebug() << min.getZ();
         qDebug() << max.getZ();
    }

    qDebug() << "Is ok!";
    return polyLine;
}

Vertix Cut::getMin(Vertix *v) {
    Vertix min;

    //for(int i = 0; i < 3;i++){
      //  qDebug() << v[i].getZ();}
    min = v[0];
    if (v[0].getZ() < v[1].getZ())
        if (v[0].getZ() < v[2].getZ())
            min = v[0];
        else
            min = v[2];
    else
        if (v[1].getZ() < v[2].getZ())
            min = v[1];
        else
            min = v[2];

    return min;
}

Vertix Cut::getMax(Vertix *v) {
    Vertix max;

    max = v[0];
    if (v[0].getZ() > v[1].getZ())
        if (v[0].getZ() > v[2].getZ())
            max = v[0];
        else
            max = v[2];
    else
        if (v[1].getZ() > v[2].getZ())
            max = v[1];
        else
            max = v[2];

    return max;
}
