#include <iostream>

int main() {
    int num1, num2;
    char operation;
float result = 0.0f; // Initialize 'result' with a default value

std::cout << "Enter first number: ";
std::cin >> num1;

std::cout << "Enter any operator (+, -, *, /): ";
std::cin >> operation;

std::cout << "Enter second number: ";
std::cin >> num2;

switch(operation) {
    case '+':
        std::cout << num1 + num2;
        break;

    case '-':
        std::cout << num1 - num2;
        break;

    case '*':
        std::cout << num1 * num2;
        break;
    case '/':
    if (num2 != 0) {
        result = static_cast<float>(num1) / static_cast<float>(num2);
        if (result == static_cast<int>(result)) {
            std::cout << "The result is an integer: " << result << std::endl;
        } else {
            std::cout << "The result is not an integer: " << result << std::endl;
        }
    } else {
        std::cout << "Error! Division by zero is not allowed." << std::endl;
    }
}
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    getchar();
    
    return 0;
}