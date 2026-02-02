#include <iostream>

// Function for division
double divide() {
    double num1, num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    if (num2 != 0)
        return num1 / num2;
    else {
        std::cout << "Error: Cannot divide by zero." << std::endl;
        return 0.0;
    }
}

int main() {
    double quotient1 = divide(); // Performing division operation
    double quotient2 = divide(); // Performing division operation

    // Displaying the results
    std::cout << "Quotient: " << quotient1 << "; " << quotient2 << std::endl;

    return 0;
}
