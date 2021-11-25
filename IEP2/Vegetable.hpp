#ifndef VEGETABLE_H
#define VEGETABLE_H

#include <iostream>

using namespace std;

class Vegetable{
    private:
        string color;
    public:
        Vegetable(const string& c);
        string getColor();
        void getDescription();
};

#endif