#include "../../std_lib_facilities.h"

int main() {
    cout << "Please add an amount followed by a currency to convert to euros\n"
        << "You can choose between yen (y), kroner (k), or pounds (p):\n";
    double amount = 0;
    char currency = ' ';
    cin >> amount >> currency;

    if(currency == 'y')
        cout << amount << " yen equals " << amount*0.008 << " euros.\n";
    else if(currency == 'k')
        cout << amount << " kroner equals " << amount*0.1 << " euros.\n";
    else if(currency == 'p')
        cout << amount << " pounds equals " << amount*1.16 << " euros.\n";
    else
        cout << "Sorry, I don't know about the currency " << currency;
}