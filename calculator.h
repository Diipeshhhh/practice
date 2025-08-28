#ifndef CALCULATOR_H
#define CALCULATOR_H

// Calculator class declaration for beginner C++ project
class Calculator {
public:
    // Constructor
    Calculator();
    
    // Basic arithmetic operations
    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    double divide(double a, double b);
    
    // Utility functions
    void displayMenu();
    void run();
    
private:
    // Helper function to get user input
    double getUserInput(const std::string& prompt);
    char getOperation();
};

#endif // CALCULATOR_H