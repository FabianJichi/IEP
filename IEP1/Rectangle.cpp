#include <iostream>
#include <stdlib.h>
#include "Point.hpp"
#include "Rectangle.hpp"

using namespace std;

Rectangle::Rectangle(const Point& p1, const Point& p2, const string& named, const string& clr):
    point1(p1), point2(p2), name(named), color(clr)
{}

void Rectangle::viewRectangleDescription(){
    cout << "Hello ! I'm a rectangle named " << this->name << " colored in " << this-> color << endl;
}

double Rectangle::calculateArea(){
    return abs((this->point2.getX() - this->point1.getX()) * (this->point2.getY() - this->point1.getY()));
}
