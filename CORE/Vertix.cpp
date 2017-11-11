#include "Vertix.h"

Vertix::Vertix(const Vertix &v) {
    this->x = v.x;
    this->y = v.y;
    this->z = v.z;
}

void Vertix::operator = (Vertix v) {
    this->x = v.x;
    this->y = v.y;
    this->z = v.z;
}

bool Vertix::operator == (Vertix v) {
    if (this->getX() == v.getX() && this->getY() == v.getY() && this->getZ() == v.getZ())
       return true;
    else
        return false;
}

bool Vertix::operator != (Vertix v) {
    if (this->getX() != v.getX() || this->getY() != v.getY() || this->getZ() != v.getZ())
        return true;
    else
        return false;
}

void Vertix::set(Tcor _x, Tcor _y, Tcor _z) {
    this->x = _x;
    this->y = _y;
    this->z = _z;
}

void Vertix::print() {
    qDebug() << " [" << this->x << "," << this->y << "," << this->z << "]";
}

Tcor Vertix::getX(void) {
    return this->x;
}

Tcor Vertix::getY(void) {
    return this->y;
}

Tcor Vertix::getZ(void) {
    return this->z;
}
