#pragma once
#include "Person.h"
#include "Room.h"

class Human : public Person {
private:
    Room* _room;
    bool _alive;

public:
    Human(const std::string& n, Room* r);
    char getSymbol() const;
    void move();
    void moveRight();
    void moveRandomly(int currentX, int currentY);
    std::string getType() const;
};