#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

using namespace std;

class Rectangle{
    public:
        Rectangle(const Point& p1, const Point& p2, const string& named, const string& clr);
        Rectangle& operator = (const Rectangle&) = delete;
        void viewRectangleDescription();
        double calculateArea();
    private:
        Point point1;
        Point point2;
        string color;
        string name;
};

#endif