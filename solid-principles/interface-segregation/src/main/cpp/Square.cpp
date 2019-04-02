#include <stdio.h>
#include <iostream>

#include "Square.hpp"

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