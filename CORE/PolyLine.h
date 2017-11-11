#ifndef LINE_H
#define LINE_H

#include <vector>
#include "Vertix.h"

class PolyLine {
public:
    PolyLine(void);

    void set(std::vector<Vertix>);
    void addVertix(Vertix);
    int size();
    void print(void);
private:
    bool check(Vertix);

    std::vector<Vertix> vertix;
};

#endif // LINE_H
