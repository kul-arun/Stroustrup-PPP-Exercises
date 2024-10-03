#include <iostream>
#include <string>

int main() {
    std::cout << "Enter three strings: ";
    std::string s1, s2, s3;
    std::cin >> s1 >> s2 >> s3;
    if (s2 < s1) {
        std::string tmp = s2;
        s2 = s1;
        s1 = tmp;
    }
    if (s3 < s1) {
        std::string tmp = s3;
        s3 = s1;
        s1 = tmp;
    }
    // At this point, s1 has the first value (alphabetical ordering).
    // Now let's check the ordering of values of s2 and s3.
    if (s3 < s2) {
        std::string tmp = s3;
        s3 = s2;
        s2 = tmp;
    }
    std::cout << s1 << ", " << s2 << ", " << s3 << '\n';
}
