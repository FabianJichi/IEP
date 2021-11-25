#include <iostream>
#include "Tomato.hpp"
#include "Vegetable.hpp"

using namespace std;

Tomato::Tomato(const string& c, int seeds): Vegetable(c){
    this->nr_seeds = seeds;
}

int Tomato::getNrSeeds(){
    return this->nr_seeds;
}

void Tomato::getDescription(){
    cout << "I'm a tomato colored in " << this->color << " and I have " << this->nr_seeds << " seeds inside" << endl;
}