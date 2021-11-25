#ifndef POINT_H
#define POINT_H

#include <iostream>

using namespace std;

class Point{
    public:
        Point(int x_coord, int y_coord);
        Point& operator = (const Point&) = delete;
        void viewPointLocation();
        int getX();
        int getY();
    private:
        int x;
        int y;
};

#endif