#include <iostream>

int main() {
    std::cout << "Enter three integers: ";
    int a, b, c;
    std::cin >> a >> b >> c;
    if (b < a) {
        int tmp = b;
        b = a;
        a = tmp;
    }
    if (c < a) {
        int tmp = c;
        c = a;
        a = tmp;
    }
    // At this point, a has the smallest value. Now let's check the values of b and c.
    if (c < b) {
        int tmp = c;
        c = b;
        b = tmp;
    }
    std::cout << a << ", " << b << ", " << c << '\n';
}
