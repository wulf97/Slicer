#include "Node.h"

Node::Node(Vertix v) {
    this->vertix = v;
}

bool Node::operator == (Node n) {
    if (this->vertix == n.getVertix())
        return true;
    else
        return false;
}

bool Node::operator != (Node n) {
    if (this->vertix != n.getVertix())
        return true;
    else
        return false;
}

bool Node::operator >= (Node n) {
    if (this->getZ() >= n.getZ())
        return true;
    else
        return false;
}

bool Node::operator >= (Tcor z) {
    if (this->getZ() >= z)
        return true;
    else
        return false;
}

bool Node::operator <= (Node n) {
    if (this->getZ() <= n.getZ())
        return true;
    else
        return false;
}

bool Node::operator <= (Tcor z) {
    if (this->getZ() <= z)
        return true;
    else
        return false;
}

bool Node::operator > (Node n) {
    if (this->getZ() > n.getZ())
        return true;
    else
        return false;
}

bool Node::operator > (Tcor z) {
    if (this->getZ() > z)
        return true;
    else
        return false;
}

bool Node::operator < (Node n) {
    if (this->getZ() < n.getZ())
        return true;
    else
        return false;
}

bool Node::operator < (Tcor z) {
    if (this->getZ() > z)
        return true;
    else
        return false;
}

void Node::setNode(Vertix v) {
    this->vertix = v;
}

void Node::addLink(Node *n) {
    if (!this->checkLink(n)) {
        if (n->getVertix().getZ() >= this->vertix.getZ())
            this->_up.push_back(n);
        else
            this->_down.push_back(n);
    }
}

Vertix Node::getVertix() {
    return this->vertix;
}

Node *Node::up(int i) {
    return this->_up.at(i);
}

Node *Node::down(int i) {
    return this->_down.at(i);
}

int Node::upSize() {
    return this->_up.size();
}

int Node::downSize() {
    return this->_down.size();
}

Tcor Node::getX() {
    return this->vertix.getX();
}

Tcor Node::getY() {
    return this->vertix.getY();
}

Tcor Node::getZ() {
    return this->vertix.getZ();
}

void Node::print(void) {
    this->vertix.print();
}

void Node::printUp(void) {
    for (int i = 0; i < this->_up.size(); i++)
        this->_up[i]->print();
}

void Node::printDown(void) {
    for (int i = 0; i < this->_down.size(); i++)
        this->_down[i]->print();
}

bool Node::checkLink(Node *n) {
    if (n->getVertix().getZ() >= this->getVertix().getZ()) {
        for (int i = 0; i < this->_up.size(); i++) {
            if (this->_up[i] == n) return true;
        }
    } else {
        for (int i = 0; i < this->_down.size(); i++) {
            if (this->_down[i] == n) return true;
        }
    }

    return false;
}
