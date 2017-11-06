#ifndef CUT_H
#define CUT_H

#include <QDebug>
#include <vector>
#include "PolyLine.h"
#include "Triangle.h"

class Cut {
public:
    Cut();
//private:
    PolyLine cutTriangle(Triangle*, int z);
private:
    Vertix getMin(Vertix*);
    Vertix getMax(Vertix*);
};

#endif // CUT_H
