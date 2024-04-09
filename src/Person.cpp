#include "include/Person.h"
#include <iostream>

using namespace std;

Person::Person(const string& n) : _name(n), _health(100) {}

void Person::decreaseHealth(int amount) {
    _health -= amount;
    if (_health < 0) {
        _health = 0;
    }
}

void Person::displayProperties() {
    cout << "Properties of entity:" << endl;
    cout << "Type: " << getType() << endl;
    cout << "Name: " << _name << endl;
    cout << "Health: " << _health << endl;
}

int Person::getHealth() const {
    return _health;
}