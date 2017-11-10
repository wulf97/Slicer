#ifndef NODEGRAPH_H
#define NODEGRAPH_H

#include <vector>
#include "Triangle.h"
#include "Node.h"

class NodeGraph {
public:
    NodeGraph(std::vector<Triangle>*);

    int size();
    Node *get(int);
    void print();
    void printSet();
private:
    void setNodeGraph(Triangle);
    Node *addNode(Vertix);
    Node *getNode(Vertix);
    void sortSet();

    int _size;
    std::vector<Node*> set;
};

#endif // NODEGRAPH_H
