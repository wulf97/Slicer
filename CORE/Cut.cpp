#include "Cut.h"

Cut::Cut(NodeGraph *ng, Tcor z) {
    this->zCor = z;

    for (int i = 0; ng->get(i) && ng->get(i)->getZ() <= z; i++) {
        this->cutNodeEdges(ng->get(i));
    }

    qDebug() << this->pLine.size();
    this->pLine.print();
}

PolyLine Cut::cutNodeEdges(Node *n) {
    Tcor x, y;
    Vertix v = n->getVertix();

    for (int i = 0; i < n->upSize(); i++) {
        if (*(n->up(i)) >= this->zCor) {
            if (v.getZ() != n->up(i)->getZ()) {
                x = cutXZ(v, n->up(i)->getVertix());
                y = cutYZ(v, n->up(i)->getVertix());

                this->pLine.addVertix(Vertix(x, y, this->zCor));
            } else {
                this->pLine.addVertix(Vertix(n->up(i)->getX(), n->up(i)->getY(), this->zCor));
            }
        }
    }

    return pLine;
}

Tcor Cut::cutXZ(Vertix v1, Vertix v2) {
    return (v2.getX() - v1.getX()) * (this->zCor - v1.getZ()) / (v2.getZ() - v1.getZ()) + v1.getX();
}

Tcor Cut::cutYZ(Vertix v1, Vertix v2) {
    return (v2.getY() - v1.getY()) * (this->zCor - v1.getZ()) / (v2.getZ() - v1.getZ()) + v1.getY();
}
