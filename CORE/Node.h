#ifndef NODE_H
#define NODE_H

#include <vector>
#include "Vertix.h"

class Node {
public:
    Node(Vertix*);

    // Изменяет ссылку узла на другой вертикс
    void setVertix(Vertix*);
    // Добавляет ссылку на связный вертикс
    void addVerix(Vertix*);
    // Печатает вертикс узла
    void print(void);
    // Печатает связные вертиксы, выше вертикса узла
    void printUp(void);
    // Печатает связные вертиксы, ниже вертикса узла
    void printDown(void);
private:
    // Вертикс узла
    Vertix *vertix;
    // Ссылки на связные вертиксы, выше вертикса узла
    std::vector<Vertix*> up;
    // Ссылки на связные вертиксы, ниже вертикса узла
    std::vector<Vertix*> down;
};

#endif // NODE_H
