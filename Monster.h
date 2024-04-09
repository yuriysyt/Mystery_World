#pragma once
#include "Person.h"
#include "Room.h"

class Monster : public Person {
private:
    int _strength;
    Room* _room;
    bool _alive;

public:
    Monster(const std::string& n, Room* r);
    char getSymbol() const;
    void move();
    std::string getType() const;
};