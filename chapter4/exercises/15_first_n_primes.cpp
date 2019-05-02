#include "../../std_lib_facilities.h"

int main() {
    vector<int> primes = {2};
    cout << "How many primes should I find?\n";
    int amount = 0;
    cin >> amount;
    cout << "Finding the first" << amount << " primes...\n\n";
    int i = 3;
    while(primes.size() < amount) {
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
        i++;
    }

    cout << "The first " << amount << " primes are: ";
    for(int i = 0; i < primes.size(); ++i) {
        if(i == primes.size() - 1)
            cout << primes[i] << '\n';
        else cout << primes[i] << ", ";
    }
    cout << '\n';
}