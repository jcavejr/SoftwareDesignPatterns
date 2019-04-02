#include <iostream>

#include "HasArea.hpp"
#include "Printable.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"

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