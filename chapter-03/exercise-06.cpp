#include <iostream>

int main() {
    std::cout << "Enter two numbers followed by the desired operation (+,-,*,/): ";
    double num1, num2;
    std::cin >> num1 >> num2;
    char operation;
    std::cin >> operation;
    switch(operation) {
    case '+':
        std::cout << "The sum of " << num1 << " and " << num2 << " is " << num1+num2 << ".\n";
        break;
    case '-':
        std::cout << "The difference of " << num1 << " and " << num2 << " is " << num1-num2 << ".\n";
        break;
    case '*':
        std::cout << "The product of " << num1 << " and " << num2 << " is " << num1*num2 << ".\n";
        break;
    case '/':
        std::cout << "The quotient of " << num1 << " and " << num2 << " is " << num1/num2 << ".\n";
        break;
    default:
        std::cout << "Invalid operation! Aborting...\n";
    }
}
