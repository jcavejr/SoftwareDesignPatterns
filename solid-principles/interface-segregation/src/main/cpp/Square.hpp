#ifndef SQUARE_H
#define SQUARE_H
#include "HasArea.hpp"
#include "Printable.hpp"

class Square: public HasArea, public Printable {
protected:
    double m_size;
public:
    Square (double size);
    double getArea();
    double getSize();
    void printInfo();
    void setSize(double size);
};

#endif