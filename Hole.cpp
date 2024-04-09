#include "Hole.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Hole::Hole() : _depth(rand() % 21) {}

char Hole::getSymbol() const {
    return 'O';
}

void Hole::move() {}

void Hole::displayProperties() {
    cout << "Properties of entity:" << endl;
    cout << "Type: Hole" << endl;
    cout << "Depth: " << _depth << endl;
}