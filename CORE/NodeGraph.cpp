#include "NodeGraph.h"

NodeGraph::NodeGraph(std::vector<Triangle> *t) {
    for (int i = 0; i < t->size(); i++) {
        this->setNodeGraph(t->at(i));
    }
}

void NodeGraph::setNodeGraph(Triangle t) {
    std::vector<Vertix> neighbors;
    Node *node;

    for (int i = 0; i < t.size(); i++) {
        node = this->addNode(t.get(i));
        neighbors = t.getNeighbors(i);

        node->addLink(this->addNode(neighbors.at(0)));
        node->addLink(this->addNode(neighbors.at(1)));
    }
}

Node *NodeGraph::addNode(Vertix v) {
    Node *node = 0;

    if (!checkNode(v)) {
        node = new Node(v);
        this->set.push_back(node);
    }

    return node;
}

bool NodeGraph::checkNode(Vertix &v) {
    for (int i = 0; i < this->set.size(); i++) {
        if (this->set.at(i)->getVertix() == v) return true;
    }

    return false;
}
