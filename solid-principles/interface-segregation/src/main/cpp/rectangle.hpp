#ifndef RECTANGLE_H
#define RECTANGLE_H

class HasArea {
public:
    virtual double getArea() = 0;
};

class Printable {
public:
    virtual void printInfo() = 0;
};

class Rectangle : public HasArea, public Printable {
public:
    Rectangle (double length, double width);
    double getArea();
    double getLength();
    double getWidth();
    void printInfo();
    void setLength();
    void setWidth();
};

#endif