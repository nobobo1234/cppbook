#include "../../std_lib_facilities.h"

int main() {
    cout << "Please enter an integer: ";
    int n;
    cin >> n;
    cout << "n is " << n
        << "\nsqrt(n) is " << sqrt(n)
        << "\nn/3 (integer division) is " << n/3
        << "\nn%3 is " << n%3
        << "\nn*3 is " << n*3
        << "\n";
}