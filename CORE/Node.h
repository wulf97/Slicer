#ifndef NODE_H
#define NODE_H

#include <vector>
#include "Vertix.h"

class Node {
public:
    Node(Vertix);

    void setNode(Vertix);
    void addLink(Node*);
    Vertix getVertix();
    //bool checkLink(Node*);
    void print(void);
    void printUp(void);
    void printDown(void);
private:
    Vertix vertix;
    std::vector<Node*> up;
    std::vector<Node*> down;
};

#endif // NODE_H
