#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "HasArea.hpp"
#include "Printable.hpp"

class Rectangle : public HasArea, public Printable {
protected:
    double m_length;
    double m_width;
public:
    Rectangle (double length, double width);
    double getArea();
    double getLength();
    double getWidth();
    void printInfo();
    void setLength(double length);
    void setWidth(double width);
};

#endif