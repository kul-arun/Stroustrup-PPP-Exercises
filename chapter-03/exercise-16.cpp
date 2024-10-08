#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::cout << "Enter a sequence of strings: ";
    std::vector<std::string> strings;
    for (std::string str; std::cin>>str; ) {
        strings.push_back(str);
    }

    // Sort in lexicographical order.
    std::ranges::sort(strings);

    std::string mode;
    int frequency = 0;
    int count = 0;
    std::string prev;
    for (auto curr : strings) {
        if (curr != prev) {
            count = 0;
        }
        ++count;
        if (count > frequency) {
            frequency = count;
            mode = curr;
        }
        prev = curr;
    }

    std::cout << "\nMin string is " << strings[0] << ".\n";
    std::cout << "Max string is " << strings[strings.size()-1] << ".\n";
    std::cout << "Mode string is " << mode << ".\n";
}
