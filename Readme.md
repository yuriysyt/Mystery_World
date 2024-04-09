# C++ Game Project

Welcome to our exciting C++ game project! Dive into a world where rooms come alive with various entities moving around. Whether you're a developer looking to contribute or a gamer eager to explore, this project has something for everyone.

## Features

- **Room**: Experience a 10x10 grid representing the dynamic game area.
- **Entities**: Encounter a diverse array of entities, each with its own unique characteristics.
  - **Stone**: Sturdy and immovable, marked by the symbol 'S'.
  - **Hole**: Beware of these traps with random depths, represented by 'O'.
  - **Human**: Agile beings with a penchant for exploration, symbolized by '@'.
  - **Monster**: Fear the unpredictable movements of these creatures, depicted by '*'.
  - **Dragon**: Witness the majestic flight of dragons as they roam, denoted by '#'.
- **Game Menu**: Seamlessly navigate through a user-friendly menu interface, providing access to room visualization, entity movement control, property inspection, room resetting, and game exit options.

## Getting Started

1. **Clone the repository**:

   ```
   git clone https://github.com/yuriysyt/Mystery-World.git
   ```

2. **Navigate to the project directory**:

   ```
   cd cpp-game-project
   ```

3. **Compile the project** using a C++11 compliant compiler (e.g., GCC or Clang):

   ```
   c++ -std=c++11 -o game main.cpp Room.cpp Number.cpp Stone.cpp Hole.cpp Person.cpp Dragon.cpp Human.cpp Monster.cpp Game.cpp
   ```

   **Pro Tip**: Utilize the provided Makefile for effortless compilation:

   ```
   make
   ```

4. **Run the compiled executable**:

   ```
   ./program
   ```

## Usage

Once the game is launched, immerse yourself in the captivating gameplay. Interact with the menu to unleash the full potential of the game mechanics. Here's a quick rundown of available options:

1. **Display Room**: Visualize the current state of the room, showcasing the positions of all entities.
2. **Move All Entities**: Witness the dynamic movement of entities as they navigate through the room.
3. **Display Entity Properties**: Dive deep into entity details by selecting a specific grid position to unveil its properties.
4. **Reset Room**: Refresh the gaming environment by resetting the room with randomized entities.
5. **Exit**: Bid adieu to the game world and return to reality.

## Contributing

We welcome contributions from fellow developers and enthusiasts! Feel free to raise issues or submit pull requests to enhance the project further.

## License

This project is licensed under the [MIT License](LICENSE).