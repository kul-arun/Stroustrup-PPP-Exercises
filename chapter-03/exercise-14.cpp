#include <iostream>
#include <vector>

int main() {
    std::cout << "Enter the value of n: ";
    int n;
    std::cin >> n;
    std::vector<bool> primes(n+1, true);
    primes[0] = false;
    primes[1] = false;
    for (int i=2; i*i<=n; ++i) {
        if (primes[i]) {
            for (int j=i*i; j<=n; j+=i) {
                primes[j] = false;
            }
        }
    }
    std::cout << "The first " << n << " primes are listed below:\n";
    for (int i=0; i<primes.size(); ++i) {
        if (primes[i]) {
            std::cout << i << ' ';
        }
    }
    std::cout << '\n';
}
