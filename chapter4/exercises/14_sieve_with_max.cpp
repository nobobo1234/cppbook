// #include "../../std_lib_facilities.h" Bug in file
#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::cout << "Where should I stop finding primes?\n";
    int max = 0;
    std::cin >> max;
    std::cout << "Finding all primes from 1 to " << max << "...\n\n";

    std::vector<bool> prime_bools(max);
    for(int i = 2; i < prime_bools.size(); ++i) {
        prime_bools[i] = true;
    }

    for(int i = 2; i < std::sqrt(max); i++)
        if(prime_bools[i])
            for(int j = i*i; j < max; j += i)
                prime_bools[j] = false;


    std::cout << "All the primes from 1 to " << max << ":\n";
    for(int i = 1; i < prime_bools.size(); ++i) {
        if(prime_bools[i])
            std::cout << i << ", ";
    }
}