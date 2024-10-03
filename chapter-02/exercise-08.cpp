#include <iostream>

int main() {
    std::cout << "Enter the integer value: ";
    int n;
    std::cin >> n;
    std::cout << "The value " << n << " is an " << (n%2 == 0 ? "even" : "odd") << " number.\n";
}
