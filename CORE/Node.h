#ifndef NODE_H
#define NODE_H

#include "Vertix.h"

class Node {
public:
    Node(Vertix);

    bool operator == (Node);
    bool operator != (Node);
    bool operator >= (Node);
    bool operator >= (Tcor);
    bool operator <= (Node);
    bool operator <= (Tcor);
    bool operator > (Node);
    bool operator > (Tcor);
    bool operator < (Node);
    bool operator < (Tcor);

    void setNode(Vertix);
    void addLink(Node*);
    Vertix getVertix();
    Node *up(int);
    Node *down(int);
    int upSize();
    int downSize();
    Tcor getX();
    Tcor getY();
    Tcor getZ();
    void print(void);
    void printUp(void);
    void printDown(void);

private:
    bool checkLink(Node*);

    Vertix vertix;
    std::vector<Node*> _up;
    std::vector<Node*> _down;
};

#endif // NODE_H
