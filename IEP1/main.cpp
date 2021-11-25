#include <iostream>
#include <chrono>
#include <ctime>

#include "Point.hpp"
#include "Rectangle.hpp"

using namespace std;

int main(){
    
    Point ppp1 = Point(2, 5);
    Point ppp2 = Point(6, 10);
    ppp1.viewPointLocation();
    ppp2.viewPointLocation();
    Rectangle rrr1 = Rectangle(ppp1, ppp2, "Rectangulus", "blue");
    rrr1.viewRectangleDescription();
    std::cout << "Rectangle area is: " << rrr1.calculateArea() << endl;
    return 0;
}