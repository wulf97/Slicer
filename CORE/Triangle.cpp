#include "Triangle.h"

Triangle::Triangle(void) {
    this->v[0] = Vertix();
    this->v[1] = Vertix();
    this->v[2] = Vertix();
}

Triangle::Triangle(Vertix v1, Vertix v2, Vertix v3) {
    this->v[0] = v1;
    this->v[1] = v2;
    this->v[2] = v3;
}

Triangle::Triangle(const Triangle &t) {
    this->v[0] = t.v[0];
    this->v[1] = t.v[1];
    this->v[2] = t.v[2];
}

void Triangle::set(Vertix v1, Vertix v2, Vertix v3) {
    this->v[0] = v1;
    this->v[1] = v2;
    this->v[2] = v3;
}

void Triangle::print(void) {
    for (int i = 0; i < 3; i++) {
        this->v[i].print();
    }
}

Vertix Triangle::get(int i) {
    return this->v[i];
}

std::vector<Vertix> Triangle::getNeighbors(int index) {
    std::vector<Vertix> v;

    switch (index) {
    case 0:
       v.push_back(this->v[1]);
       v.push_back(this->v[2]);
    break;
    case 1:
       v.push_back(this->v[0]);
       v.push_back(this->v[2]);
    break;
    case 2:
       v.push_back(this->v[0]);
       v.push_back(this->v[1]);
    break;
    }


    return v;
}

int Triangle::size() {
    return 3;
}
