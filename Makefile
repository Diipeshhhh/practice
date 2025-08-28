# Makefile for Beginner C++ Calculator Project
# This demonstrates basic build automation concepts

# Compiler
CXX = g++

# Compiler flags
# -Wall: Enable all warning messages
# -Wextra: Enable extra warning messages
# -std=c++11: Use C++11 standard
CXXFLAGS = -Wall -Wextra -std=c++11

# Target executable name
TARGET = calculator

# Source files
SOURCES = calculator.cpp

# Header files (for dependency tracking)
HEADERS = calculator.h

# Default target
all: $(TARGET)

# Build the calculator executable
$(TARGET): $(SOURCES) $(HEADERS)
	@echo "Compiling $(TARGET)..."
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCES)
	@echo "Build complete! Run with: ./$(TARGET)"

# Clean build artifacts
clean:
	@echo "Cleaning build artifacts..."
	rm -f $(TARGET)
	@echo "Clean complete!"

# Run the calculator
run: $(TARGET)
	@echo "Running the calculator..."
	./$(TARGET)

# Help target
help:
	@echo "Available targets:"
	@echo "  all     - Build the calculator (default)"
	@echo "  clean   - Remove build artifacts"
	@echo "  run     - Build and run the calculator"
	@echo "  help    - Show this help message"

# Declare phony targets (targets that don't create files)
.PHONY: all clean run help