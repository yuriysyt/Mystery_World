#pragma once

class Entity {
public:
    virtual char getSymbol() const = 0;
    virtual void move() = 0;
    virtual void displayProperties() = 0;
};