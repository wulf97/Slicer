#ifndef NODE_H
#define NODE_H

#include <vector>
#include "Vertix.h"

class Node {
public:
    Node(Vertix);

    bool operator == (Node);

    void setNode(Vertix);
    void addLink(Node*);
    Vertix getVertix();
    Node *getUpLink(int);
    Node *getDownLink(int);
    int upLinkSize();
    int downLinkSize();
    void print(void);
    void printUp(void);
    void printDown(void);

private:
    bool checkLink(Node*);

    Vertix vertix;
    std::vector<Node*> up;
    std::vector<Node*> down;
};

#endif // NODE_H
