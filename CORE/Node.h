#ifndef NODE_H
#define NODE_H

#include <vector>
#include "Vertix.h"

class Node {
public:
    Node(Vertix*);

    void setVertix(Vertix*);
    void addVerix(Vertix*);
    void print(void);
    void printUp(void);
    void printDown(void);
private:
    Vertix *vertix;
    std::vector<Vertix*> up;
    std::vector<Vertix*> down;
};

#endif // NODE_H
