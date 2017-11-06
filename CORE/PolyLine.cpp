#include "PolyLine.h"

PolyLine::PolyLine() {

}

void PolyLine::set(std::vector<Vertix> v) {
    this->v = v;
}

void PolyLine::addVertix(Vertix v) {
    this->v.push_back(v);
}

void PolyLine::print(void) {
    for(int i = 0; i < this->v.size(); i++) {
        this->v[i].print();
    }
}
