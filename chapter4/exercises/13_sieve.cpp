// #include "../../std_lib_facilities.h" Bug in file
#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int limit = 100;
    std::vector<bool> prime_bools(limit);
    for(int i = 2; i < prime_bools.size(); ++i) {
        prime_bools[i] = true;
    }

    for(int i = 2; i < std::sqrt(limit); ++i)
        if(prime_bools[i])
            for(int j = i*i; j < limit; j += i)
                prime_bools[j] = false;


    std::cout << "All the primes from 1 to 100:\n";
    for(int i = 1; i < prime_bools.size(); ++i) {
        if(prime_bools[i])
            std::cout << i << ", ";
    }
}