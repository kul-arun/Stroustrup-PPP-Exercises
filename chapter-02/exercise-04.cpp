#include <iostream>

int main() {
    std::cout << "Enter two integer values: ";
    int val1, val2;
    std::cin >> val1 >> val2;
    std::cout << "Smaller value is " << (val1 < val2 ? val1 : val2) << ".\n";
    std::cout << "Larger value is " << (val1 > val2 ? val1 : val2) << ".\n";
    std::cout << "Sum of the values is " << val1 + val2 << ".\n";
    std::cout << "Difference of the values is " << val1 - val2 << ".\n";
    std::cout << "Product of the values is " << val1 * val2 << ".\n";
    std::cout << "Ratio of the values is " << val1 / val2 << ".\n";
}
