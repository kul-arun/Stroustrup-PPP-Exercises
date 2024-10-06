#include <iostream>
#include <string>

int main() {
    std::cout << "Enter input string: ";
    std::string str;
    std::cin >> str;
    for (auto c : str) {
        std::cout << c << '\t' << int(c) << '\n';
    }
}
