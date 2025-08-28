# Beginner C++ Calculator Project

This is a beginner-friendly C++ project that implements a command-line calculator. It's designed to teach fundamental C++ programming concepts while building something practical and useful.

## 🎯 Learning Objectives

This project demonstrates the following C++ concepts:
- **Classes and Objects**: Object-oriented programming basics
- **Functions**: Function declaration, definition, and usage
- **Input/Output**: Using `std::cin` and `std::cout`
- **Control Structures**: `switch` statements, `while` loops, and conditionals
- **Error Handling**: Input validation and division by zero checking
- **Header Files**: Separating declarations and implementations
- **Build Systems**: Using Makefiles for compilation

## ✨ Features

- **Basic Arithmetic Operations**: Addition, subtraction, multiplication, and division
- **User-Friendly Interface**: Menu-driven command-line interface
- **Input Validation**: Handles invalid input gracefully
- **Error Handling**: Prevents division by zero
- **Modular Design**: Well-organized code that's easy to extend
- **Educational Comments**: Code includes helpful comments for learning

## 🚀 Getting Started

### Prerequisites

- A C++ compiler (g++ recommended)
- Make utility (optional, but recommended)

### Building the Project

#### Using Make (Recommended)
```bash
# Compile the calculator
make

# Run the calculator
make run

# Clean build artifacts
make clean

# See all available targets
make help
```

#### Manual Compilation
```bash
g++ -Wall -Wextra -std=c++11 -o calculator calculator.cpp
```

### Running the Calculator

```bash
./calculator
```

## 🎮 How to Use

1. Run the calculator using `./calculator`
2. Choose an operation from the menu (1-5)
3. Enter two numbers when prompted
4. View the result
5. Press Enter to continue or choose "5" to exit

### Example Usage

```
=== Welcome to the Beginner C++ Calculator! ===
This calculator demonstrates basic C++ concepts.
=============================================

Choose an operation:
1. Addition (+)
2. Subtraction (-)
3. Multiplication (*)
4. Division (/)
5. Exit
Enter your choice (1-5): 1
Enter the first number: 15
Enter the second number: 25
Result: 15 + 25 = 40

Press Enter to continue...
```

## 📁 Project Structure

```
practice/
├── calculator.h      # Header file with class declaration
├── calculator.cpp    # Main implementation file
├── Makefile         # Build automation
└── README.md        # Project documentation
```

## 🔧 Code Structure

### Files Overview

- **`calculator.h`**: Contains the `Calculator` class declaration with all function prototypes
- **`calculator.cpp`**: Contains the implementation of all calculator functions and the main program
- **`Makefile`**: Automates the build process with various targets

### Key Functions

- `add()`, `subtract()`, `multiply()`, `divide()`: Basic arithmetic operations
- `displayMenu()`: Shows the user interface
- `getUserInput()`: Handles user input with validation
- `run()`: Main program loop

## 🚀 Extending the Project

This calculator is designed to be easily extensible. Here are some ideas for beginners:

### Easy Extensions
- Add more operations (power, square root, percentage)
- Add a calculation history feature
- Implement memory functions (store/recall)

### Intermediate Extensions
- Add support for scientific notation
- Implement expression parsing (e.g., "2 + 3 * 4")
- Add unit conversions

### Advanced Extensions
- Create a graphical user interface
- Add complex number support
- Implement matrix operations

## 🎓 Learning Path

### For Complete Beginners
1. Study the `main()` function to understand program flow
2. Examine the `Calculator` class constructor
3. Look at simple functions like `add()` and `subtract()`
4. Understand the menu system in `displayMenu()`

### For Intermediate Learners
1. Analyze the input validation in `getUserInput()`
2. Study error handling in the `divide()` function
3. Understand the main program loop in `run()`
4. Examine the Makefile structure

## 🐛 Common Issues and Solutions

### Compilation Errors
- **Error**: `calculator.h: No such file or directory`
  - **Solution**: Make sure both `calculator.h` and `calculator.cpp` are in the same directory

### Runtime Issues
- **Issue**: Program crashes on invalid input
  - **Solution**: The program includes input validation to prevent this

## 🤝 Contributing

This is a learning project! Feel free to:
- Add new features
- Improve error handling
- Add more comments
- Create additional examples

## 📝 License

This project is for educational purposes. Feel free to use and modify for learning!
