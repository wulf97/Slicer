#ifndef CUT_H
#define CUT_H

#include <vector>
#include "Vertix.h"
#include "NodeGraph.h"
#include "PolyLine.h"

class Cut {
public:
    Cut(NodeGraph*, Tcor);
private:
    PolyLine cutNodeEdges(Node*);
    Tcor getLength(Tcor, Tcor);
    Tcor cutXZ(Vertix, Vertix);
    Tcor cutYZ(Vertix, Vertix);

    NodeGraph *nGraph;
    Tcor zCor;
};

#endif // CUT_H
