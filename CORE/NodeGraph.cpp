#include "NodeGraph.h"

NodeGraph::NodeGraph(std::vector<Triangle> *t) {
    this->_size = NULL;

    for (int i = 0; i < t->size(); i++) {
        this->setNodeGraph(t->at(i));
    }

    this->sortSet();

    qDebug() << "End";
}

int NodeGraph::size() {
    return this->_size;
}

Node *NodeGraph::get(int i) {
    return this->set[i];
}

void NodeGraph::print() {
    Node *n;

    for (int i = 0; i < this->_size; i++) {
        qDebug() << "#" << i;
        n = this->set[i];
        n->print();

        qDebug() << "up ->";
        for (int j = 0; j < n->upSize(); j++) {
            n->up(j)->print();
        }

        qDebug() << "down ->";
        for (int j = 0; j < n->downSize(); j++) {
            n->down(j)->print();
        }
    }
}

void NodeGraph::printSet() {
    for (int i = 0; i < set.size(); i++) {
        this->set[i]->print();
    }
}

void NodeGraph::setNodeGraph(Triangle t) {
    std::vector<Vertix> neighbors;
    Node *node[3];

    for (int i = 0; i < t.size(); i++) {
        node[0] = this->addNode(t.get(i));
        if (node[0] != NULL) {
            neighbors = t.getNeighbors(i);

            node[1] = this->addNode(neighbors.at(0));
            if (node[1] != NULL)
                node[0]->addLink(node[1]);

            node[2] = this->addNode(neighbors.at(1));
            if (node[2] != NULL)
                node[0]->addLink(node[2]);
        }
    }
}

Node *NodeGraph::addNode(Vertix v) {
    Node *node;

    node = getNode(v);

    if (node == NULL) {
        node = new Node(v);
        this->set.push_back(node);
        _size++;
    }

    return node;
}

Node *NodeGraph::getNode(Vertix v) {
    Node *node;

    for (int i = 0; i < this->set.size(); i++) {
        node = this->set[i];
        if (node->getVertix() == v) return node;
    }

    return NULL;
}

void NodeGraph::sortSet() {
    Vertix v1, v2;
    for (int i = this->set.size(); i > 0; i--) {
        for (int j = 0; j < i - 1; j++) {
            v1 = this->set.at(j)->getVertix();
            v2 = this->set.at(j + 1)->getVertix();

            if (v1.getZ() >= v2.getZ())
                std::swap(this->set[j], this->set[j+1]);

        }
    }
}
