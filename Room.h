#pragma once
#include <vector>
#include "Entity.h"

class Room {
private:
    std::vector<std::vector<Entity*> > _grid;

public:
    Room();
    void clearEntities();
    void addEntity(Entity* entity, int row, int col);
    Entity* getEntity(int row, int col);
    void moveEntity(Entity* entity, int newRow, int newCol);
    void getEntityPosition(Entity* entity, int& row, int& col) const;
    bool isCellEmpty(int row, int col) const;
    int getWidth() const;
    int getHeight() const;
    void displayRoom();
};