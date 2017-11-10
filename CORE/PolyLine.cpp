#include "PolyLine.h"

PolyLine::PolyLine() {

}

void PolyLine::set(std::vector<Vertix> v) {
    this->vertix = v;
}

void PolyLine::addVertix(Vertix v) {
    this->vertix.push_back(v);
}

void PolyLine::print(void) {
    if (this->vertix.size() == NULL) qDebug() << "Emty";
    for(int i = 0; i < this->vertix.size(); i++) {
        this->vertix[i].print();
    }
}
