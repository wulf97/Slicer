#ifndef STL_H
#define STL_H

#include <fstream>
#include <vector>
#include <QDebug>
#include "Vertix.h"
#include "Triangle.h"

class STL {
public:
    STL(const char*);
    std::vector<Triangle> *getTriangles();
private:
    const char *patch;
};

#endif // STL_H
