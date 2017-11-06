#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <QDebug>
#include "Vertix.h"

class Triangle {
public:
    Triangle(void);
    Triangle(Vertix, Vertix, Vertix);
    Triangle(const Triangle&);

    void set(Vertix, Vertix, Vertix);
    void print(void);
    Vertix get(int);
private:
    Vertix n;
    Vertix v[3];
};

#endif // TRIANGLE_H
