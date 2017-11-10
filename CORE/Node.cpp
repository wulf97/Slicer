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

void Node::setNode(Vertix v) {
    this->vertix = v;
}

void Node::addLink(Node *n) {
    if (!this->checkLink(n)) {
        if (n->getVertix().getZ() >= this->vertix.getZ())
            this->up.push_back(n);
        else
            this->down.push_back(n);
    }
}

Vertix Node::getVertix() {
    return this->vertix;
}

Node *Node::getUpLink(int i) {
    return this->up.at(i);
}

Node *Node::getDownLink(int i) {
    return this->down.at(i);
}

int Node::upLinkSize() {
    return this->up.size();
}

int Node::downLinkSize() {
    return this->down.size();
}

void Node::print(void) {
    this->vertix.print();
}

void Node::printUp(void) {
    for (int i = 0; i < this->up.size(); i++)
        this->up[i]->print();
}

void Node::printDown(void) {
    for (int i = 0; i < this->down.size(); i++)
        this->down[i]->print();
}

bool Node::checkLink(Node *n) {
    if (n->getVertix().getZ() >= this->getVertix().getZ()) {
        for (int i = 0; i < this->up.size(); i++) {
            if (this->up.at(i) == n) return true;
        }
    } else {
        for (int i = 0; i < this->down.size(); i++) {
            if (this->down.at(i) == n) return true;
        }
    }

    return false;
}
