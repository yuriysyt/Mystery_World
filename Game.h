#pragma once
#include "Room.h"

class Game {
private:
    Room _room;

public:
    Game();
    void start();

private:
    void displayMenu();
    void initializeEntities();
    void addEntity(Entity* entity, int maxAttempts);
    void moveEntities();
    void displayEntityProperties();
    void resetRoom();
};