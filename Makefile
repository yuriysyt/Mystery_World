# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11

# Source files
SRCS = main.cpp Room.cpp Number.cpp Stone.cpp Hole.cpp Person.cpp Dragon.cpp Human.cpp Monster.cpp Game.cpp

# Target executable
TARGET = game

# Default rule to build the target executable
all: $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $^

# Clean rule to remove generated files
clean:
	rm -f $(TARGET)
