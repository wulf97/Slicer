#include "Node.h"

Node::Node() {
}

void Node::setVertix(Vertix v) {
    this->vertix = v;
}

void Node::addLink(Vertix v) {
    if (v.getZ() >= this->vertix.getZ())
        this->up.push_back(v);
    else
        this->down.push_back(v);
}

Vertix Node::getVertix() {
    return this->vertix;
}

void Node::print(void) {
    this->vertix.print();
}

void Node::printUp(void) {
    for (int i = 0; i < this->up.size(); i++)
        this->up[i].print();
}

void Node::printDown(void) {
    for (int i = 0; i < this->down.size(); i++)
        this->down[i].print();
}
