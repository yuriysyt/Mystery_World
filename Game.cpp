#include "Game.h"
#include "Stone.h"
#include "Hole.h"
#include "Human.h"
#include "Monster.h"
#include "Dragon.h"
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

Game::Game() {
    initializeEntities();
}

void Game::start() {
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                _room.displayRoom();
                break;
            case 2:
                moveEntities();
                break;
            case 3:
                displayEntityProperties();
                break;
            case 4:
                initializeEntities();
                _room.displayRoom();
                break;
            case 5:
                cout << "Exiting the game." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 5);
}

void Game::displayMenu() {
    cout << "Menu:" << endl;
    cout << "1. Display Room" << endl;
    cout << "2. Move All Entities" << endl;
    cout << "3. Display Entity Properties" << endl;
    cout << "4. Reset Room" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
}

void Game::initializeEntities() {
    _room.clearEntities();

    addEntity(new Stone(), 2);
    addEntity(new Stone(), 2);
    addEntity(new Hole(), 2);
    addEntity(new Hole(), 2);

    addEntity(new Human("Human1", &_room), 3);
    addEntity(new Human("Human2", &_room), 3);
    addEntity(new Human("Human3", &_room), 3);

    addEntity(new Monster("Monster1", &_room), 3);
    addEntity(new Monster("Monster2", &_room), 3);
    addEntity(new Monster("Monster3", &_room), 3);

    addEntity(new Dragon("Dragon1", &_room), 3);
    addEntity(new Dragon("Dragon2", &_room), 3);
}

void Game::addEntity(Entity* entity, int maxAttempts) {
    int attempts = 0;
    while (attempts < maxAttempts) {
        int row = rand() % 10;
        int col = rand() % 10;
        if (_room.isCellEmpty(row, col)) {
            _room.addEntity(entity, row, col);
            break;
        }
        attempts++;
    }
}

void Game::moveEntities() {
    vector<Entity*> entitiesToMove;

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            Entity* entity = _room.getEntity(i, j);
            if (entity != nullptr) {
                entitiesToMove.push_back(entity);
            }
        }
    }

    for (Entity* entity : entitiesToMove) {
        entity->move();
    }

    _room.displayRoom();
}

void Game::displayEntityProperties() {
    int row, col;
    cout << "Enter the row and column (space-separated) to display entity properties: ";
    cin >> row >> col;

    Entity* entity = _room.getEntity(row, col);

    if (entity != nullptr) {
        entity->displayProperties();
    } else {
        cout << "No entity at the specified position." << endl;
    }
}

void Game::resetRoom() {
    initializeEntities();
}