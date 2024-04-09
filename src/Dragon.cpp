#include "include/Dragon.h"
#include <cstdlib>
#include <vector>

using namespace std;

Dragon::Dragon(const string& n, Room* r) : Person(n), _room(r), _alive(true) {}

char Dragon::getSymbol() const {
    return _alive ? '#' : 'X';
}

void Dragon::move() {
    if (_alive) {
        if (getHealth() == 0) {
            _alive = false;
            return;
        }
        int currentX, currentY;
        _room->getEntityPosition(this, currentX, currentY);

        vector<pair<int, int> > availableCells;

        for (int i = -1; i <= 1; ++i) {
            for (int j = -1; j <= 1; ++j) {
                int newX = currentX + i;
                int newY = currentY + j;

                if (newX >= 0 && newX < _room->getWidth() && newY >= 0 && newY < _room->getHeight() && _room->isCellEmpty(newX, newY)) {
                    availableCells.push_back(make_pair(newX, newY));
                }
            }
        }

        if (!availableCells.empty()) {
            int randomIndex = rand() % availableCells.size();
            int newX = availableCells[randomIndex].first;
            int newY = availableCells[randomIndex].second;

            _room->moveEntity(this, newX, newY);

            decreaseHealth(rand() % 6);
        }
    }
}

string Dragon::getType() const {
    return "Dragon";
}