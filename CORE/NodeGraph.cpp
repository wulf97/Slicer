#include "NodeGraph.h"

NodeGraph::NodeGraph(std::vector<Triangle> *t) {
    for (int i = 0; i < t->size(); i++) {
        this->setNodeGraph(t->at(i));
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
    }

    return node;
}

Node *NodeGraph::getNode(Vertix v) {
    Node *node;

    for (int i = 0; i < this->set.size(); i++) {
        node = this->set.at(i);
        if (node->getVertix() == v) return node;
    }

    return NULL;
}
