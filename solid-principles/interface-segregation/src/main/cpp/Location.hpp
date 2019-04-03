#ifndef LOCATION_H
#define LOCATION_H

class Location {
public:
    virtual double getYLocation() = 0;
    virtual double getXLocation() = 0;
    virtual void setYLocation(double yLocation) = 0;
    virtual void setXLocation(double xLocation) = 0;
};

#endif