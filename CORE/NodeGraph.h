#ifndef NODEGRAPH_H
#define NODEGRAPH_H

#include <vector>
#include "Triangle.h"
#include "Node.h"

class NodeGraph {
public:
    NodeGraph(std::vector<Triangle>*);
private:
    void setNodeGraph(Triangle);
    Node *addNode(Vertix);
    Node *getNode(Vertix);

    std::vector<Node*> set;
};

#endif // NODEGRAPH_H
