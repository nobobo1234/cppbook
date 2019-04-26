#include "../../std_lib_facilities.h"

int main() {
    cout << "Input 3 integer values\n";
    int digit1 = 0;
    int digit2 = 0;
    int digit3 = 0;
    cin >> digit1 >> digit2 >> digit3;
    if(digit2 < digit1) {
        int swap_digit2 = digit2;
        digit2 = digit1;
        digit1 = swap_digit2;
    }
    if(digit1 > digit3) {
        int swap_digit3 = digit3;
        digit3 = digit1;
        digit1 = swap_digit3;
    }
    if(digit2 > digit3) {
        int swap_digit2 = digit2;
        digit2 = digit3;
        digit3 = swap_digit2;
    }
    cout << digit1 << ", " << digit2 << ", " << digit3;
}