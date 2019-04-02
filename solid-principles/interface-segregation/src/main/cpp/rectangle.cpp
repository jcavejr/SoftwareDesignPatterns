#include <stdio.h>
#include <iostream>

#include "Rectangle.hpp"

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