#include "../../std_lib_facilities.h"

int main() {
    cout << "Enter two numbers and an operation (+, -, *, /):\n";
    double num1 = 0;
    double num2 = 0;
    char operation;
    cin >> num1 >> num2 >> operation;
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
            cout << "The quotient of " << num1 << " and " << num2 << " is " << num1/num2;
            break;
    }
}