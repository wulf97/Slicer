#include "Cut.h"

Cut::Cut(NodeGraph *ng, Tcor z) {
    this->zCor = z;
    int i = 0;

    while (ng->get(i)->getVertix().getZ() <= z) {
        this->cutNodeEdges(ng->get(i)).print();
        i++;
    }
}

PolyLine Cut::cutNodeEdges(Node *n) {
    PolyLine pLine;
    Tcor x, y;
    Vertix v = n->getVertix();

    for (int i = 0; i < n->upLinkSize(); i++) {
        if (n->getUpLink(i)->getVertix().getZ() > this->zCor) {
            if (v.getZ() != n->getUpLink(i)->getVertix().getZ()) {
                x = cutXZ(v, n->getUpLink(i)->getVertix());
                y = cutYZ(v, n->getUpLink(i)->getVertix());

                pLine.addVertix(Vertix(x, y, this->zCor));
            } else {
                pLine.addVertix(Vertix(v.getX(), v.getY(), this->zCor));
                pLine.addVertix(Vertix(n->getUpLink(i)->getVertix().getX(), n->getUpLink(i)->getVertix().getY(), this->zCor));
            }
        }
    }

    return pLine;
}

Tcor Cut::getLength(Tcor cor_1, Tcor cor_2) {
    if (cor_1 >= cor_2)
        return cor_1 - cor_2;
    else
        return cor_2 - cor_1;
}

Tcor Cut::cutXZ(Vertix v1, Vertix v2) {
    Tcor x;

    x = fabs(v2.getX() - v1.getX() * (this->zCor - v1.getZ()) / (v2.getZ() - v1.getZ()));

    //qDebug() << v2.getZ() - v1.getZ();
    return x;
}

Tcor Cut::cutYZ(Vertix v1, Vertix v2) {
    Tcor y;

    y = fabs(v2.getY() - v1.getY() * (this->zCor - v1.getZ()) / (v2.getZ() - v1.getZ()));

    return y;
}

