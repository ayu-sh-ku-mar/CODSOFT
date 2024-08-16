#include <iostream>

void showMenu() {
    std::cout << "Select an operation:\n";
    std::cout << "1. Addition (+)\n";
    std::cout << "2. Subtraction (-)\n";
    std::cout << "3. Multiplication (*)\n";
    std::cout << "4. Division (/)\n";
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cout << "Error: Division by zero is not allowed.\n";
        return 0;
    }
}

int main() {
    double num1, num2;
    char choice;
    char cont;

    do {
        std::cout << "Enter the first number: ";
        std::cin >> num1;
        std::cout << "Enter the second number: ";
        std::cin >> num2;

        showMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        double result;

        switch(choice) {
            case '+':
                result = add(num1, num2);
                std::cout << "Result: " << num1 << " + " << num2 << " = " << result << "\n";
                break;
            case '-':
                result = subtract(num1, num2);
                std::cout << "Result: " << num1 << " - " << num2 << " = " << result << "\n";
                break;
            case '*':
                result = multiply(num1, num2);
                std::cout << "Result: " << num1 << " * " << num2 << " = " << result << "\n";
                break;
            case '/':
                result = divide(num1, num2);
                if (num2 != 0) {
                    std::cout << "Result: " << num1 << " / " << num2 << " = " << result << "\n";
                }
                break;
            default:
                std::cout << "Invalid choice.\n";
                break;
        }

        std::cout << "Do you want to perform another operation? (y/n): ";
        std::cin >> cont;

    } while (cont == 'y' || cont == 'Y');

    std::cout << "Thank you for using the calculator. Goodbye!\n";

    return 0;
}

