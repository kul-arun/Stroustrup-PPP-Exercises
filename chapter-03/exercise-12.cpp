#include <iostream>
#include <vector>

bool is_prime(int n);

int main() {
    std::vector<int> primes;
    for (int i=1; i<=100; ++i) {
        if (is_prime(i)) {
            primes.push_back(i);
        }
    }
    for (int prime : primes) {
        std::cout << prime << ' ';
    }
    std::cout << '\n';
}

bool is_prime(int n) {
    if (n == 1) {
        return false; // 1 is neither prime nor composite.
    }
    for (int i=2; i*i <=n; ++i) {
        if (n%i == 0) {
            return false;
        }
    }
    return true;
}
