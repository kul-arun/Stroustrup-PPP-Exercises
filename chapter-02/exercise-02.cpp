#include <iostream>
#include <iomanip>

int main() {
    std::cout << "Enter number of miles: ";
    double number_of_miles;
    std::cin >> number_of_miles;
    if (number_of_miles < 0) {
        std::cout << "Invalid number of miles! Aborting...\n";
    } else {
        double km_per_mile = 1.609;
        std::cout << std::fixed << number_of_miles << " miles is "
                  << number_of_miles * km_per_mile << " kilometers.\n";
    }
}
