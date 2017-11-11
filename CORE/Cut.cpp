#include "Cut.h"

Cut::Cut(NodeGraph *ng, Tcor z) {
    this->zCor = z;
    int i = 0;

    while (ng->get(i)->getVertix().getZ() <= z) {
        qDebug() << "#";
        this->cutNodeEdges(ng->get(i)).print();
        i++;
    }
}

PolyLine Cut::cutNodeEdges(Node *n) {
    PolyLine pLine;
    Tcor x, y;
    Vertix v = n->getVertix();

    for (int i = 0; i < n->upSize(); i++) {
        if (*(n->up(i)) >= this->zCor) {
            if (v.getZ() != n->up(i)->getVertix().getZ()) {
                x = cutXZ(v, n->up(i)->getVertix());
                y = cutYZ(v, n->up(i)->getVertix());

                pLine.addVertix(Vertix(x, y, this->zCor));
            } else {
                pLine.addVertix(Vertix(n->up(i)->getX(), n->up(i)->getY(), this->zCor));
            }
        }
    }

    return pLine;
}

Tcor Cut::cutXZ(Vertix v1, Vertix v2) {
    Tcor x;

    x = fabs(v2.getX() - v1.getX() * (this->zCor - v1.getZ()) / (v2.getZ() - v1.getZ()));

    return x;
}

Tcor Cut::cutYZ(Vertix v1, Vertix v2) {
    Tcor y;

    y = fabs(v2.getY() - v1.getY() * (this->zCor - v1.getZ()) / (v2.getZ() - v1.getZ()));

    return y;
}
