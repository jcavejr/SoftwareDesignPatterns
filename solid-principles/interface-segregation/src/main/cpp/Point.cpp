#include <iostream>
#include <stdlib.h>

#include "Point.hpp"

Point::Point(double xLocation, double yLocation) : m_xLocation(xLocation), m_yLocation(yLocation) {}

void Point::printInfo() {
    std::cout << "Point: (" << m_xLocation << ", " << m_yLocation << ")" <<std::endl;
}

double Point::getYLocation() {
    return m_yLocation;
}

double Point::getXLocation() {
    return m_xLocation;
}

void Point::setYLocation(double yLocation) {
    m_yLocation = yLocation;
}

void Point::setXLocation(double xLocation) {
    m_xLocation = xLocation;
}