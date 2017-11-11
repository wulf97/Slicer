#include "PolyLine.h"

PolyLine::PolyLine() {

}

void PolyLine::set(std::vector<Vertix> v) {
    this->vertix = v;
}

void PolyLine::addVertix(Vertix v) {
    if (!this->check(v)){
        this->vertix.push_back(v);
    }
}

int PolyLine::size() {
    return this->vertix.size();
}

void PolyLine::print(void) {
    if (this->vertix.size() == NULL) qDebug() << "Emty";
    for(int i = 0; i < this->vertix.size(); i++) {
        this->vertix[i].print();
    }
}

bool PolyLine::check(Vertix v) {
    for (int i = 0; i < this->vertix.size(); i++) {
        if (this->vertix[i] == v) return true;
    }

    return false;
}
