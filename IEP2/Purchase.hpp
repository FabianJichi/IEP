#ifndef PURCHASE_H
#define PURCHASE_H

#include <iostream>
#include "Vegetable.hpp"

using namespace std;

class Purchase{
    private:
        Vegetable *myVegetable;
        float price;
    public:
        Purchase(Vegetable *veg, float price);
        Purchase& operator=(const Purchase &rhs){
            if(&rhs != this){
                delete myVegetable;
                myVegetable = new Vegetable(*rhs.myVegetable);
                return *this;
            }
            return *this;
        }
        float getPrice();
        void getDescription();
};

#endif