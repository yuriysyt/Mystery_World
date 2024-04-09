#include "include/Monster.h"
#include <cstdlib>
#include <vector>

using namespace std;

Monster::Monster(const string& n, Room* r) : Person(n), _strength(rand() % 6), _room(r), _alive(true) {}

char Monster::getSymbol() const {
    return _alive ? '*' : 'X';
}

void Monster::move() {
    if (_alive) {
        if (getHealth() == 0) {
            _alive = false;
            return;
        }
        int currentX, currentY;
        _room->getEntityPosition(this, currentX, currentY);

        int cellsToMove = _strength;

        while (cellsToMove > 0) {
            vector<pair<int, int> > availableCells;

            for (int i = -1; i <= 1; ++i) {
                for (int j = -1; j <= 1; ++j) {
                    int newX = currentX + i;
                    int newY = currentY + j;

                    if (newX >= 0 && newX < _room->getWidth() && newY >= 0 && newY < _room->getHeight() &&
                        _room->isCellEmpty(newX, newY)) {
                        availableCells.push_back(make_pair(newX, newY));
                    }
                }
            }

            if (!availableCells.empty()) {
                int randomIndex = rand() % availableCells.size();
                int newX = availableCells[randomIndex].first;
                int newY = availableCells[randomIndex].second;

                _room->moveEntity(this, newX, newY);

                decreaseHealth(1);

                currentX = newX;
                currentY = newY;

                cellsToMove--;
            } else {
                break;
            }
        }
    }
}

string Monster::getType() const {
    return "Monster";
}