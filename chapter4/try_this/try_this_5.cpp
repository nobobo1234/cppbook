#include "../../std_lib_facilities.h"

int square(int x) {
    int square = 0;
    for(int i = 0; i < x; i++)
        square += x;
    return square;
}

int main() {
    cout << "Enter the number you want to square:\n";
    int number_to_square = 0;
    cin >> number_to_square;
    cout << "The square of " << number_to_square << " is " << square(number_to_square) << '\n';
}
