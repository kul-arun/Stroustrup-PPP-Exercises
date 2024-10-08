#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers;
    std::cout << "Enter the set of positive integers: ";
    for (int num; std::cin>>num; ) {
        numbers.push_back(num);
    }

    std::ranges::sort(numbers);

    int mode = -1;
    int frequency = 0; // element that has the highest frequency is the mode.
    for (int count=0, prev=-1; auto curr : numbers) {
        if (curr == prev) {
            ++count;
        } else {
            count = 1;
        }
        if (count > frequency) {
            frequency = count;
            mode = curr;
        }
        prev = curr;
    }
    std::cout << "Mode of the numbers is " << mode << ".\n";
}
