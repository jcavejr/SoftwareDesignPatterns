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