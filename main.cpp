#include <iostream>
#include <cstdlib>
#include <ctime>
#include "src/include/Game.h"

using namespace std;

int main() {
    srand(time(nullptr));

    Game game;
    game.start();

    return 0;
}