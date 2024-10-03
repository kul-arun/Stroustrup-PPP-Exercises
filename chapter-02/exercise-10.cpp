#include <iostream>
#include <string>

int main() {
    std::cout << "Enter an operation followed by two operands (numbers): ";
    std::string operation;
    std::cin >> operation;
    double num1, num2;
    std::cin >> num1 >> num2;
    if (operation == "+" || operation == "plus") {
        std::cout << num1 + num2;
    } else if (operation == "-" || operation == "minus") {
        std::cout << num1 - num2;
    } else if (operation == "*" || operation == "mul") {
        std::cout << num1 * num2;
    } else if (operation == "/" || operation == "div") {
        std::cout << num1 / num2;
    } else {
        std::cout << "Invalid operation or operands! Aborting...";
    }
    std::cout << std::endl;
}
