#include "../../std_lib_facilities.h"

int main() {
    cout << "Enter two integers (seperated by an enter)\n";
    double val1 = 0;
    double val2 = 0;
    cin >> val1 >> val2;
    if(val1 > val2) {
        cout << val1 << " is the higher number"
            << "and " << val2 << " is the lower number\n";
    } else {
        cout << val2 << " is the higher number"
            << " and " << val1 << " is the lower number\n";
    }
    cout << val1+val2 << " is the sum of your two numbers " << val1 << " and " << val2 << '\n';
    cout << val1-val2 << " is the difference of your two numbers " << val1 << " and " << val2 << '\n';
    cout << val1*val2 << " is the product of your two numbers " << val1 << " and " << val2 << '\n';
    cout << val1/val2 << " is the ratio of your two numbers " << val1 << " and " << val2 << '\n';
}