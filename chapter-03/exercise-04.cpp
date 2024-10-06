#include <iostream>
#include <vector>

int main() {
    std::cout << "Enter the distances between two cities: ";
    std::vector<double> distances;
    for (double distance; std::cin>>distance; ) {
        distances.push_back(distance);
    }
    double min_distance = distances[0];
    double max_distance = distances[0];
    double total_distance = 0.0;
    for (auto distance : distances) {
        total_distance += distance;
        if (distance < min_distance) {
            min_distance = distance;
        }
        if (distance > max_distance) {
            max_distance = distance;
        }
    }
    std::cout << "Minimum distance: " << min_distance << '\n';
    std::cout << "Maximum distance: " << max_distance << '\n';
    std::cout << "Total distance: " << total_distance << '\n';
    std::cout << "Mean distance: " << total_distance/distances.size() << '\n';
}
