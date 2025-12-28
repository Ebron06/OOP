# Makefile

# Compiler
CXX = g++

# Compiler flags (warnings + C++ standard)
CXXFLAGS = -Wall -Wextra -std=c++17

# Target executable
TARGET = main

# Source files
SRCS = main.cpp

# Default rule
all: $(TARGET)

# Build the target
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

# Clean generated files
clean:
	rm -f $(TARGET)

