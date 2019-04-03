#ifndef POINT_H
#define POINT_H

#include "Location.hpp"
#include "Printable.hpp"

class Point : public Location, public Printable {
protected:
    double m_xLocation;
    double m_yLocation;
public:
    Point(double xLocation, double yLocation);
    void printInfo();
    double getYLocation();
    double getXLocation();
    void setYLocation(double yLocation);
    void setXLocation(double xLocation);
};

#endif