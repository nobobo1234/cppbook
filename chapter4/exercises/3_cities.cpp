#include "../../std_lib_facilities.h"

int main() {
    vector<double> distances;

    cout << "Enter some distances:\n";
    for(double distance; cin >> distance;) {
        distances.push_back(distance);
    }

    double sum = 0;
    double smallest = distances[0];
    double largest = 0;

    for(double distance : distances) {
        // Calculate the sum of all the distances
        sum += distance;

        // Calculate the smallest distance
        if(distance < smallest)
            smallest = distance;

        // Calculate the largest distance
        if(distance > largest)
            largest = distance;
    }

    cout << "The total distance is: " << sum << '\n';
    cout << "The smallest distance entered is: " << smallest << '\n';
    cout << "The largest distance entered is: " << largest << '\n';
    cout << "The mean of all the distances is: " << sum/distances.size() << '\n';
}