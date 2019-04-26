#include "../../std_lib_facilities.h"

int main() {
    cout << "Enter an operation followed by two operands (+, -, *, / are supported).\n";
    string operation = "";
    double operand1 = 0;
    double operand2 = 0;
    cin >> operation >> operand1 >> operand2;
    if(operation == "+")
        cout << operand1 << " + " << operand2 << " = " << operand1+operand2;
    if(operation == "-")
        cout << operand1 << " - " << operand2 << " = " << operand1-operand2;
    if(operation == "*")
        cout << operand1 << " * " << operand2 << " = " << operand1*operand2;
    if(operation == "/")
        cout << operand1 << " / " << operand2 << " = " << operand1/operand2;
}