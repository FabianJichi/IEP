#ifndef VEGETABLE_H
#define VEGETABLE_H

#include <iostream>

using namespace std;

class Vegetable{
    protected:
        string color;
    public:
        Vegetable(const string& c);
        Vegetable &operator=(const Vegetable &rhs){
            if(&rhs != this){
                color = rhs.color;
                return *this;
            }
            return *this;
        }
        string getColor();
        void getDescription();
};

#endif