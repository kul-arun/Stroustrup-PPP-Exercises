#include <iostream>
#include <vector>

int main() {
    std::vector<int> required_counts = {1000, 1'000'000, 1'000'000'000};
    for (auto required_count : required_counts) {
        int total_count = 0;
        int square_count = 0;
        int grains_number = 1; // number of grains for the current square.
        while (total_count < required_count) {
            ++square_count;
            total_count += grains_number;
            grains_number *= 2;
        }
        std::cout << square_count << " squares are required for at least "
                  << required_count << " grains.\n";
    }
}


/* We can also get the number of squares another way:
 
 * The increase in grains per square follows a geometric progression.
  
 * => The total number of grains is the sum S(n) = 2^0 + 2^1 + 2^2 + ... + 2^(n-1)
 
 * This sum can be written as S(n) = 2^(n) - 1
 
 * If we require at least 'p' grains, then all we need to solve is 2^(n) - 1 >= p
 
 * Therefore, n >= log2(p+1). The required answer can be found by taking the ceil of this result.
 
 */
