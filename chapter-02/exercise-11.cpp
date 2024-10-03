#include <iostream>

int main() {
    // Assuming the number of coins provided by the user are non-negative.
    std::cout << "Enter number of pennies: ";
    int penny_count;
    std::cin >> penny_count;
    std::cout << "Enter number of nickels: ";
    int nickel_count;
    std::cin >> nickel_count;
    std::cout << "Enter number of dimes: ";
    int dime_count;
    std::cin >> dime_count;
    std::cout << "Enter number of quarters: ";
    int quarter_count;
    std::cin >> quarter_count;
    std::cout << "Enter number of half-dollar coins: ";
    int half_dollar_count;
    std::cin >> half_dollar_count;
    std::cout << "Enter number of one-dollar coins: ";
    int one_dollar_count;
    std::cin >> one_dollar_count;

    std::cout << "\nYou have " << penny_count << " penn" << (penny_count == 1 ? "y." : "ies.");
    std::cout << "\nYou have " << nickel_count << " nickel" << (nickel_count == 1 ? "." : "s.");
    std::cout << "\nYou have " << dime_count << " dime" << (dime_count == 1 ? "." : "s.");
    std::cout << "\nYou have " << quarter_count << " quarter" << (quarter_count == 1 ? "." : "s.");
    std::cout << "\nYou have " << half_dollar_count << " half-dollar coin" << (half_dollar_count == 1 ? "." : "s.");
    std::cout << "\nYou have " << one_dollar_count << " one-dollar coin" << (one_dollar_count == 1 ? "." : "s.");

    double pennies_to_dollars = 0.01;
    double nickels_to_dollars = 0.05;
    double dimes_to_dollars = 0.10;
    double quarters_to_dollars = 0.25;
    double half_dollars_to_dollars = 0.50;

    double total_cash = (penny_count * pennies_to_dollars) + (nickel_count * nickels_to_dollars) +
                        (dime_count * dimes_to_dollars) + (quarter_count * quarters_to_dollars) +
                        (half_dollar_count * half_dollars_to_dollars) + one_dollar_count;

    // Allowing narrowing conversion.
    int total_dollars = (int) total_cash;
    int total_cents = (total_cash - total_dollars) * 100;

    std::cout << "\n\nThe value of all your coins is " << total_dollars
              << " dollar" << (total_dollars == 1 ? "" : "s") << " and " << total_cents
              << " cent" << (total_cents == 1 ? "" : "s") << ".\n";
}
