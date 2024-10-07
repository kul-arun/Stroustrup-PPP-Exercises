#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> spelled_out_digits = {"zero", "one", "two", "three", "four",
                                                   "five", "six", "seven", "eight", "nine"};
    while (true) {
        std::cout << "Enter a digit (0-9): ";
        int digit;
        std::cin >> digit;
        std::cout << digit << " in spelled-out form is " << spelled_out_digits[digit] << ".\n";
        std::cout << "Enter a spelled-out form of a digit: ";
        std::string spelled_out_digit;
        std::cin >> spelled_out_digit;
        for (int i=0; i<spelled_out_digits.size(); ++i) {
            if (spelled_out_digit == spelled_out_digits[i]) {
                std::cout << spelled_out_digit << " in digit form is " << i << ".\n";
                break;
            }
        }
        std::cout << "Do you wish to exit the program? (y/n): ";
        char choice;
        std::cin >> choice;
        if (choice == 'y') {
            break;
        }
    }
}
