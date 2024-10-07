#include <iostream>
#include <limits>

template <typename T>
void print_square_count(T required_count) {
    T total_count = 0;
    int square_count = 0;
    T grains_number = 1; // number of grains for the current square.
    while (total_count < required_count) {
        ++square_count;
        total_count += grains_number;
        grains_number *= 2;
    }
    std::cout << square_count << " squares are required for at least "
              << required_count << " grains.\n";
}

int main() {
    int max_int = std::numeric_limits<int>::max();
    double max_double = std::numeric_limits<double>::max();
    print_square_count(max_int);
    print_square_count(max_double);
}
