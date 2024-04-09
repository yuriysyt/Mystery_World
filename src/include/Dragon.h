#pragma once
#include "Person.h"
#include "Room.h"

class Dragon : public Person {
private:
    Room* _room;
    bool _alive;

public:
    Dragon(const std::string& n, Room* r);
    char getSymbol() const;
    void move();
    std::string getType() const;
};