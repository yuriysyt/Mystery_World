#include "include/Stone.h"
#include <iostream>

using namespace std;

char Stone::getSymbol() const {
    return 'S';
}

void Stone::move() {}

void Stone::displayProperties() {
    cout << "Properties of entity:" << endl;
    cout << "Type: Stone" << endl;
}