#include <iostream>
#include <string>

int main() {
    std::cout << "Enter the spelled-out number in lowercase: ";
    std::string number;
    std::cin >> number;
    if (number == "zero") {
        std::cout << 0;
    } else if (number == "one") {
        std::cout << 1;
    } else if (number == "two") {
        std::cout << 2;
    } else if (number == "three") {
        std::cout << 3;
    } else if (number == "four") {
        std::cout << 4;
    } else {
        std::cout << "not a number I know";
    }
    std::cout << std::endl;
}
