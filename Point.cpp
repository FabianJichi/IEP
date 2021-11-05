#include "Point.hpp"
#include <iostream>

using namespace std;

Point::Point(int x_coord, int y_coord){
	this->x = x_coord;
	this->y = y_coord;
}

void Point::viewPointLocation(){
	cout << "My coordinates are: {" << this->x << ", " << this->y << ")" << endl;
}

int Point::getX(){
	return this->x;
}

int Point::getY(){
	return this->y;
}