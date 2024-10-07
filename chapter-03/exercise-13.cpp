#include <iostream>
#include <vector>

int main() {
    std::vector<bool> primes(101, true);
    primes[0] = false;
    primes[1] = false;
    for (int i=2; i*i<=100; ++i) {
       if (primes[i]) {
           for (int j=i*i; j<=100; j+=i) {
               primes[j] = false;
           }
       }
    }

    for (int i=0; i<primes.size(); ++i) {
        if (primes[i]) {
            std::cout << i << ' ';
        }
    }
    std::cout << '\n';
}
