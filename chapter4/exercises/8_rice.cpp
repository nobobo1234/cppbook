#include "../../std_lib_facilities.h"

int main() {
    int sum = 1;
    int limit = 1000000000;
    int iteration = 0;
    while(sum <= limit) {
        sum = 2*sum;
        cout << "Iteration " << iteration << ", sum: " << sum << '\n';
        ++iteration;
    }
}