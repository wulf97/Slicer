#ifndef VERTIX_H
#define VERTIX_H

#include <QDebug>

typedef float Tcor;

class Vertix {
public:
    Vertix(Tcor _x = 0, Tcor _y = 0, Tcor _z = 0) : x(_x), y(_y), z(_z) {}
    Vertix(const Vertix&);

    void operator = (Vertix);
    bool operator == (Vertix);
    void set(Tcor, Tcor, Tcor);
    void print(void);
    Tcor getX(void);
    Tcor getY(void);
    Tcor getZ(void);
private:
    Tcor x;
    Tcor y;
    Tcor z;
};

#endif // VERTIX_H
