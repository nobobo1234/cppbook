#include "../../std_lib_facilities.h"

int main() {
    vector<int> primes = {2};
    cout << "Where should I stop finding primes?\n";
    int max = 0;
    cin >> max;
    cout << "Finding all primes from 1 to " << max << "...\n\n";
    for(int i = 3; i <= max; ++i) {
        bool is_prime = false;
        for(int prime : primes) {
            if(i % prime != 0) is_prime = true;
            else if(i % prime == 0) {
                is_prime = false;
                break;
            }
        }
        if(is_prime) {
            primes.push_back(i);
        }
    }

    cout << "All the primes between 1 and " << max << " are:\n";
    for(int i = 0; i < primes.size(); ++i) {
        if(i == primes.size() - 1)
            cout << primes[i] << '\n';
        else cout << primes[i] << ", ";
    }
    cout << '\n';
}