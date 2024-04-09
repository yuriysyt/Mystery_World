#pragma once
#include <string>
#include "Entity.h"

class Person : public Entity {
protected:
    std::string _name;
    int _health;

public:
    Person(const std::string& n);
    char getSymbol() const = 0;
    void decreaseHealth(int amount);
    void displayProperties();
    int getHealth() const;
    virtual std::string getType() const = 0;
};