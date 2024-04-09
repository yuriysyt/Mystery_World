#pragma once
#include "Entity.h"

class Stone : public Entity {
public:
    char getSymbol() const;
    void move();
    void displayProperties();
};