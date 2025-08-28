#include <iostream>
#include <string>
#include <limits>
#include "calculator.h"

// Constructor
Calculator::Calculator() {
    std::cout << "=== Welcome to the Beginner C++ Calculator! ===" << std::endl;
    std::cout << "This calculator demonstrates basic C++ concepts." << std::endl;
    std::cout << "=============================================" << std::endl;
}

// Basic arithmetic operations
double Calculator::add(double a, double b) {
    return a + b;
}

double Calculator::subtract(double a, double b) {
    return a - b;
}

double Calculator::multiply(double a, double b) {
    return a * b;
}

double Calculator::divide(double a, double b) {
    if (b == 0) {
        std::cout << "Error: Division by zero is not allowed!" << std::endl;
        return 0;
    }
    return a / b;
}

// Display the menu of operations
void Calculator::displayMenu() {
    std::cout << std::endl;
    std::cout << "Choose an operation:" << std::endl;
    std::cout << "1. Addition (+)" << std::endl;
    std::cout << "2. Subtraction (-)" << std::endl;
    std::cout << "3. Multiplication (*)" << std::endl;
    std::cout << "4. Division (/)" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << "Enter your choice (1-5): ";
}

// Get user input with error handling
double Calculator::getUserInput(const std::string& prompt) {
    double value;
    while (true) {
        std::cout << prompt;
        if (std::cin >> value) {
            // Clear any remaining characters in the input buffer
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return value;
        } else {
            std::cout << "Invalid input! Please enter a valid number." << std::endl;
            std::cin.clear(); // Clear error flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear input buffer
        }
    }
}

// Get operation choice from user
char Calculator::getOperation() {
    int choice;
    while (true) {
        if (std::cin >> choice) {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            switch (choice) {
                case 1: return '+';
                case 2: return '-';
                case 3: return '*';
                case 4: return '/';
                case 5: return 'q'; // quit
                default:
                    std::cout << "Invalid choice! Please enter a number between 1-5: ";
                    break;
            }
        } else {
            std::cout << "Invalid input! Please enter a number between 1-5: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}

// Main calculator loop
void Calculator::run() {
    char operation;
    double num1, num2, result;
    
    do {
        displayMenu();
        operation = getOperation();
        
        if (operation == 'q') {
            std::cout << "Thank you for using the calculator! Goodbye!" << std::endl;
            break;
        }
        
        // Get two numbers from user
        num1 = getUserInput("Enter the first number: ");
        num2 = getUserInput("Enter the second number: ");
        
        // Perform calculation based on operation
        switch (operation) {
            case '+':
                result = add(num1, num2);
                std::cout << "Result: " << num1 << " + " << num2 << " = " << result << std::endl;
                break;
            case '-':
                result = subtract(num1, num2);
                std::cout << "Result: " << num1 << " - " << num2 << " = " << result << std::endl;
                break;
            case '*':
                result = multiply(num1, num2);
                std::cout << "Result: " << num1 << " * " << num2 << " = " << result << std::endl;
                break;
            case '/':
                result = divide(num1, num2);
                if (num2 != 0) { // Only show result if division was successful
                    std::cout << "Result: " << num1 << " / " << num2 << " = " << result << std::endl;
                }
                break;
        }
        
        // Ask if user wants to continue
        std::cout << std::endl << "Press Enter to continue...";
        std::cin.get();
        
    } while (true);
}

// Main function - entry point of the program
int main() {
    Calculator calc;
    calc.run();
    return 0;
}