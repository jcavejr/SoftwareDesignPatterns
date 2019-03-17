#include <stdio.h>
#include <iostream>
#include "rectangle.hpp"

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
    Rectangle (double length, double width) : m_length(length) , m_width(width) {
    }

    double getArea() {
        return m_length * m_width;
    }

    double getLength() {
        return m_length;
    }

    double getWidth() {
        return m_width;
    }

    void printInfo() {
        std::cout << "RECTANGLE: " << m_length << "x" << m_width << std::endl;
    }

    void setLength(double length) {
        m_length = length;
    }

    void setWidth(double width) {
        m_width = width;
    }
};

class Square: public HasArea, public Printable {
protected:
    double m_size;
public:
    Square (double size) : m_size(size) {
    }

    double getArea() {
        return m_size * m_size;
    }

    double getSize() {
        return m_size;
    }

    void printInfo() {
        std::cout << "SQUARE: " << m_size << "x" << m_size << std::endl;
    }

    void setSize(double size) {
        m_size = size;
    }
};

int main(int argc, char* argv[]) {
    Rectangle rect(2.0, 3.4);
    rect.printInfo();
    Square square(3);
    square.printInfo();
    square.setSize(4.5);
    square.printInfo();

    Printable* s;
    s = &rect;
    s->printInfo();
    HasArea* a;
    a = &rect;
    std::cout << "AREA: " << a->getArea() << std::endl;
}