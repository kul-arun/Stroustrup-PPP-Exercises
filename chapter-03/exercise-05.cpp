#include <iostream>

int main() {
    std::cout << "Think of a number between 1 and 100 (both inclusive): ";
    int number;
    std::cin >> number;
    int question_count = 0;
    int low = 1;
    int high = 100;
    while (low<high) {
        ++question_count;
        int mid = (low+high)/2;
        std::cout << "Is the number greater than " << mid << " ? (y/n): ";
        char c;
        std::cin >> c;
        // Assumes that the user will only provide the inputs 'y' or 'n'.
        if (c == 'y') {
            low = mid+1;
        } else {
            high = mid;
        }
    }
    std::cout << "The number is " << low << " and it has been found by asking "
              << question_count << " questions.\n";
}
