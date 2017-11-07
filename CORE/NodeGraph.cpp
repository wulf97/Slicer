#include "NodeGraph.h"

NodeGraph::NodeGraph(std::vector<Triangle> *t) {
    Node buff;

    for (int i = 0; i < t->size(); i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < this->set->size(); k++) {
                if (!(t->at(i).get(j) == this->set->at(k).getVertix())) {
                    buff.setVertix(t->at(i).get(j));
                    for (int d = 0; d < 3; d++) {
                        if (d != j)
                            buff.addLink(t->at(i).get(d));
                    }
                    this->set->push_back(buff);
                }
            }
        }
    }
}
