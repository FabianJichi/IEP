#include <iostream>
#include "Vegetable.hpp"
#include "Purchase.hpp"

using namespace std;

int main(){
    Vegetable *v2 = new Vegetable("blue");
    cout << v2->getColor();
    v2->getDescription();
    Purchase *p1 = new Purchase(v2, 2.412);
    Purchase *p2 = p1;
    p1->getDescription();
    p2->getDescription();
    return 0;
}