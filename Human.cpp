#include "Human.h"
#include <cstdlib>

using namespace std;

Human::Human(const string& n, Room* r) : Person(n), _room(r), _alive(true) {}

char Human::getSymbol() const {
    return _alive ? '@' : 'X';
}

void Human::move() {
    if (_alive) {
        int currentX, currentY;
        _room->getEntityPosition(this, currentX, currentY);

        if (getHealth() == 0) {
            _alive = false;
            return;
        }

        if (currentX < _room->getWidth() - 1 && _room->isCellEmpty(currentX + 1, currentY)) {
            moveRight();
        } else {
            moveRandomly(currentX, currentY);
        }

        decreaseHealth(1);
    }
}

void Human::moveRight() {
    int currentX, currentY;
    _room->getEntityPosition(this, currentX, currentY);
    _room->moveEntity(this, currentX + 1, currentY);
}

void Human::moveRandomly(int currentX, int currentY) {
    if (currentX < _room->getWidth() - 1) {
        int newX, newY;

        do {
            int directionX = rand() % 3 - 1;
            int directionY = rand() % 3 - 1;

            newX = currentX + directionX;
            newY = currentY + directionY;
        } while (!_room->isCellEmpty(newX, newY));

        _room->moveEntity(this, newX, newY);
    } else {
        int newX, newY;

        do {
            int directionX = rand() % 2 - 1;
            int directionY = rand() % 3 - 1;

            newX = currentX + directionX;
            newY = currentY + directionY;
        } while (!_room->isCellEmpty(newX, newY));

        _room->moveEntity(this, newX, newY);
    }
}

string Human::getType() const {
    return "Human";
}