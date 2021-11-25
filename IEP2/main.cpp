#include <iostream>
#include "Vegetable.hpp"
#include "Tomato.hpp"
#include "Purchase.hpp"

using namespace std;

int main(){
    Vegetable *v2 = new Vegetable("blue");
    Tomato *v1 = new Tomato("red", 20);
    v1->getDescription();
    Purchase *p1 = new Purchase(v2, 2.412);
    Purchase *p2 = new Purchase(v1, 4.12);
    p1->getDescription();
    p2->getDescription();
    return 0;
}