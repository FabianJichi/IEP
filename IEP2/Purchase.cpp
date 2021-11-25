#include <iostream>
#include "Purchase.hpp"

using namespace std;

Purchase::Purchase(Vegetable *v, float p){
    this->myVegetable = v;
    this->price = p;
}

float Purchase::getPrice(){
    return this->price;
}

void Purchase::getDescription(){
    cout << "My purcase was a vegetable colored in " << this->myVegetable->getColor() << " and cost me " << this->price << " dolars." << endl;
}
