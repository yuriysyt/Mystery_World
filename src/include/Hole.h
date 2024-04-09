#pragma once
#include "Entity.h"

class Hole : public Entity {
private:
    int _depth;

public:
    Hole();
    char getSymbol() const;
    void move();
    void displayProperties();
};