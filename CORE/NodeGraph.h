#ifndef NODEGRAPH_H
#define NODEGRAPH_H

#include "Triangle.h"
#include "Node.h"

class NodeGraph {
public:
    NodeGraph(std::vector<Triangle>*);
    //void initGraph();
private:
    std::vector<Node> *set;
};

#endif // NODEGRAPH_H
