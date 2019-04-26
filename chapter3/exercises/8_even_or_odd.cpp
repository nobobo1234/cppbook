#include "../../std_lib_facilities.h"

int main() {
    cout << "Input a digit\n";
    int digit = 0;
    cin >> digit;
    if(digit % 2 == 0) {
        cout << "The value " << digit << " is an even number";
    }
    if(digit % 2 == 1) {
        cout << "The value " << digit << " is an odd number";
    }
}