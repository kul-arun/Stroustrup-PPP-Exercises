#include <iostream>
#include <string>

int main() {
    std::cout << "Enter the spelled-out number in lowercase: ";
    std::string number;
    std::cin >> number;
    int digit = -1;
    if (number == "zero") {
        digit = 0;
    } else if (number == "one") {
        digit = 1;
    } else if (number == "two") {
        digit = 2;
    } else if (number == "three") {
        digit = 3;
    } else if (number == "four") {
        digit = 4;
    }
    if (digit == -1) {
        std::cout << "not an number I know\n";
    } else {
        std::cout << digit << '\n';
    }
}
