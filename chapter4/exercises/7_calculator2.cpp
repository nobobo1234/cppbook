#include "../../std_lib_facilities.h"

bool is_single_digit(const string digit) {
    return digit == "0" || digit == "1" || digit == "2" || digit == "3" || digit == "4" || digit == "5" || digit == "6" || digit == "7" || digit == "8" || digit == "9";
}

int digit_convert(const string digit) {
    vector<string> digits = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    if(is_single_digit(digit)) {
        return stoi(digit);
    } else {
        for(int i = 0; i < digits.size(); ++i)
            if(digits[i] == digit)
                return i;
    }
}

int main() {
    cout << "Enter two numbers and an operation (+, -, *, /):\n";
    string string1 = "";
    string string2 = "";
    char operation;
    cin >> string1 >> operation >> string2;
    int num1 = digit_convert(string1);
    int num2 = digit_convert(string2);
    switch(operation) {
        case '+':
            cout << "The sum of " << num1 << " and " << num2 << " is " << num1+num2;
            break;
        case '-':
            cout << "The difference of " << num1 << " and " << num2 << " is " << num1-num2;
            break;
        case '*':
            cout << "The product of " << num1 << " and " << num2 << " is " << num1*num2;
            break;
        case '/':
            if(num2 == 0) {
                cout << "You can't divide by 0" << '\n';
                break;
            }
            cout << "The quotient of " << num1 << " and " << num2 << " is " << double(num1)/num2;
            break;
        default:
            cout << "Bad operator\n";
    }
}