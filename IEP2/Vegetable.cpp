#include <iostream>
#include "Vegetable.hpp"

using namespace std;

Vegetable::Vegetable(const string& c){
    this->color = c;
}

string Vegetable::getColor(){
    return this->color;
}

void Vegetable::getDescription(){
    cout << "I'm a vegetable colored in " << this->color << endl;
}
