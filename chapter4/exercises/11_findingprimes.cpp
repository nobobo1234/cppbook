#include "../../std_lib_facilities.h"

int main() {
    vector<int> primes = {2};
    for(int i = 3; i <= 100; ++i) {
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

    cout << "All the primes are: ";
    for(int prime : primes) {
        cout << prime << ", ";
    }
    cout << '\n';
}