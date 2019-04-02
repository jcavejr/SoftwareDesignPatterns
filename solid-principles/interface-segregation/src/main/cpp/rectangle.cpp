#include <stdio.h>
#include <iostream>
#include "rectangle.hpp"

Rectangle::Rectangle(double length, double width): m_length(length), m_width(width) {}

double Rectangle::getArea() {
    return m_length * m_width;
}

double Rectangle::getLength() {
    return m_length;
}

double Rectangle::getWidth() {
    return m_width;
}

void Rectangle::printInfo() {
    std::cout << "RECTANGLE: " << m_length << "x" << m_width << std::endl;
}

void Rectangle::setLength(double length) {
    m_length = length;
}

void Rectangle::setWidth(double width) {
    m_width = width;
}

Square::Square (double size) : m_size(size) {}

double Square::getArea() {
    return m_size * m_size;
}

double Square::getSize() {
    return m_size;
}

void Square::printInfo() {
    std::cout << "SQUARE: " << m_size << "x" << m_size << std::endl;
}

void Square::setSize(double size) {
    m_size = size;
}

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

    s = &square;
    s->printInfo();
    a = &square;
    std::cout << "AREA: " << a->getArea() << std::endl;
}