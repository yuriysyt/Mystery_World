#include "include/Room.h"
#include <iostream>

using namespace std;

Room::Room() {
    _grid.resize(10, vector<Entity*>(10, nullptr));
}

void Room::clearEntities() {
    for (int i = 0; i < getHeight(); ++i) {
        for (int j = 0; j < getWidth(); ++j) {
            _grid[i][j] = nullptr;
        }
    }
}

void Room::addEntity(Entity* entity, int row, int col) {
    _grid[row][col] = entity;
}

Entity* Room::getEntity(int row, int col) {
    return _grid[row][col];
}

void Room::moveEntity(Entity* entity, int newRow, int newCol) {
    int currentRow, currentCol;
    getEntityPosition(entity, currentRow, currentCol);

    _grid[currentRow][currentCol] = nullptr;

    _grid[newRow][newCol] = entity;
}

void Room::getEntityPosition(Entity* entity, int& row, int& col) const {
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (_grid[i][j] == entity) {
                row = i;
                col = j;
                return;
            }
        }
    }
}

bool Room::isCellEmpty(int row, int col) const {
    return _grid[row][col] == nullptr;
}

int Room::getWidth() const {
    return _grid[0].size();
}

int Room::getHeight() const {
    return _grid.size();
}

void Room::displayRoom() {
    cout << "   ";
    for (int x = 0; x < 10; ++x) {
        cout << x << " ";
    }
    cout << endl;

    for (int i = 0; i < 10; ++i) {
        cout << i << ": ";

        for (int j = 0; j < 10; ++j) {
            if (_grid[i][j] != nullptr) {
                cout << _grid[i][j]->getSymbol() << " ";
            } else {
                cout << ". ";
            }
        }
        cout << endl;
    }
}