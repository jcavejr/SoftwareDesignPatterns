#include <iostream>
#include <stdlib.h>

#include "Point.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"
#define BOOST_TEST_MODULE GeometryTest
#include "boost/test/included/unit_test.hpp"

BOOST_AUTO_TEST_CASE(point_test) {
    Point test_point(1.0, 1.0);

    BOOST_CHECK(test_point.getXLocation() == 1.0);
    BOOST_CHECK(test_point.getYLocation() == 1.0);

    test_point.setXLocation(3.0);
    test_point.setYLocation(4.0);

    BOOST_CHECK(test_point.getXLocation() == 3.0);
    BOOST_CHECK(test_point.getYLocation() == 4.0);
}

BOOST_AUTO_TEST_CASE(rectangle_test) {
    Rectangle test_rectangle(2.0, 1.0);

    BOOST_CHECK(test_rectangle.getArea() == 2.0);

    test_rectangle.setLength(5.0);
    BOOST_CHECK(test_rectangle.getLength() == 5.0);
    
    test_rectangle.setWidth(3.0);
    BOOST_CHECK(test_rectangle.getWidth() == 3.0);

    BOOST_CHECK(test_rectangle.getArea() == 15.0);
}

BOOST_AUTO_TEST_CASE(square_teest) {
    Square test_square(3.0);

    BOOST_CHECK(test_square.getSize() == 3.0);
    BOOST_CHECK(test_square.getArea() == 9.0);

    test_square.setSize(4.0);
    BOOST_CHECK(test_square.getSize() == 4.0);
    BOOST_CHECK(test_square.getArea() == 16.0);
}