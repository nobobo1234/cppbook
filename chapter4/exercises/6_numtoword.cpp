#include "../../std_lib_facilities.h"

bool is_digit(string digit) {
    return digit == "0" || digit == "1" || digit == "2" || digit == "3" || digit == "4" || digit == "5" || digit == "6" || digit == "7" || digit == "8" || digit == "9";
}

int main() {
    vector<string> digits = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    int digit = 0;
    cout << "Enter a digit (0 to 10):\n";
    for(string digit; cin >> digit;) {
        if(is_digit(digit)) {
            cout << digits[stoi(digit)] << '\n';
        } else {
            for(int i = 0; i < digits.size(); ++i)
                if(digits[i] == digit)
                    cout << i << '\n';
        }
    }
}