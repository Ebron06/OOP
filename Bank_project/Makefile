# Makefile

# Compiler
CXX = g++

# Compiler flags (warnings + C++ standard)
CXXFLAGS = -Wall -Wextra -std=c++17 -Iinclude

# Target executable
TARGET = build/main
TEST_TARGET = build/tests


# Source files
SRCS = src/main.cpp src/Bank.cpp src/BankAccount.cpp 
TESTS = tests/test_bankaccount.cpp tests/test_bank.cpp
# Default rule
all: $(TARGET) $(TEST_TARGET)

# Build the target
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

# Clean generated files
clean:
	rm -f $(TARGET)
#Build Test
$(TEST_TARGET): $(TESTS) src/Bank.cpp src/BankAccount.cpp 
	mkdir -p build
	$(CXX) $(CXXFLAGS) -o $(TEST_TARGET) $(TESTS) src/Bank.cpp src/BankAccount.cpp 

#Build TEST
$(TEST): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)
