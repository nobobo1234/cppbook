#include "../../std_lib_facilities.h"

int main() {
    double sum = 1;
    int iteration = 0;
    while(iteration < 64) {
        sum = 2*sum;
        cout << "Iteration " << iteration << ", sum: " << sum << '\n';
        ++iteration;
    }
}

// An integer can only go until iteration 29, a double can go all the way until iteration 63
// The int also becomes negative after iteration 29, and then it becomes 0;