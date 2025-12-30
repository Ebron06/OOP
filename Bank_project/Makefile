# Makefile

# Compiler
CXX = g++

# Compiler flags (warnings + C++ standard)
CXXFLAGS = -Wall -Wextra -std=c++17 -Iinclude

# Target executable
TARGET = build/main
TEST_TARGET = build/tests


# Source files
SRCS = src/main.cpp src/Bank.cpp src/BankAccount.cpp src/atm.cpp
TESTS = tests/test_bankaccount.cpp 
# Default rule
all: $(TARGET) $(TEST_TARGET)

# Build the target
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

# Clean generated files
clean:
	rm -f $(TARGET)
#Build Test
$(TEST_TARGET): $(TESTS) src/Bank.cpp src/BankAccount.cpp src/atm.cpp
	mkdir -p build
	$(CXX) $(CXXFLAGS) -o $(TEST_TARGET) $(TESTS) src/Bank.cpp src/BankAccount.cpp src/atm.cpp

#Build TEST
$(TEST): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)
