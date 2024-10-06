#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<double> temps;
    for (double temp; std::cin>>temp; ) {
        temps.push_back(temp);
    }
    std::ranges::sort(temps);
    double median_temp = -1;
    int size = temps.size();
    if (size%2 == 1) {
        median_temp = temps[size/2];
    } else {
        median_temp = (temps[size/2 - 1]+temps[size/2])/2;
    }
    std::cout << "Median temperature: " << median_temp << '\n';
}
