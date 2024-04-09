# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11

# Source files
SRCS = main.cpp src/Room.cpp src/Number.cpp src/Stone.cpp src/Hole.cpp src/Person.cpp src/Dragon.cpp src/Human.cpp src/Monster.cpp src/Game.cpp

# Target executable
TARGET = game

# Default rule to build the target executable
all: $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $^ -Iinclude

# Clean rule to remove generated files
clean:
	rm -f $(TARGET)
