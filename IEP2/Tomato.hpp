#ifndef TOMATO_H
#define TOMATO_H

#include <iostream>
#include "Vegetable.hpp"

using namespace std;

class Tomato : public Vegetable{
    private:
        int nr_seeds;
    public:
        Tomato(const string& c, int seeds);
        Tomato &operator=(const Tomato &rhs){
            if(&rhs != this){
                Vegetable::operator=(rhs);
                nr_seeds = rhs.nr_seeds;
                return *this;
            }
            return *this;
        }
        int getNrSeeds();
        void getDescription();
};

#endif