#ifndef LINE_H
#define LINE_H

#include <vector>
#include "Vertix.h"

class PolyLine {
public:
    PolyLine(void);

    void set(std::vector<Vertix>);
    void addVertix(Vertix);
    void print(void);
private:
    int size;
    std::vector<Vertix> v;
};

#endif // LINE_H
