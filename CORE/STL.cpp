#include "STL.h"

STL::STL(const char *str) {
    this->patch = str;

}

std::vector<Triangle> *STL::getTriangles() {
    int num;
    std::vector<Triangle> *t = new std::vector<Triangle>();
    Triangle buff;
    std::ifstream file;
    file.open(this->patch, std::ios::in | std::ios::binary);

    if(file.is_open()) {
        file.seekg(80, std::ios::beg);
        file.read((char*)&num, sizeof(num));
        t->reserve(num);

        qDebug() << num;
        for (int i = 0; i < num; i++) {
            file.read((char*)&buff, sizeof(buff));
            t->push_back(buff);
            file.seekg(2, std::ios::cur);
        }

        file.close();
    }

    return t;
}
