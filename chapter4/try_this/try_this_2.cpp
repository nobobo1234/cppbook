#include "../../std_lib_facilities.h"

int main() {
    cout << "Please add an amount followed by a currency to convert to euros\n"
        << "You can choose between yen (ye), yuan (yu), kroner (k), or pounds (p):\n";
    double amount = 0;
    char currency = ' ';
    cin >> amount >> currency;

    switch(currency) {
        case 'ye':
            cout << amount << " yen equals " << amount*0.008 << " euros.\n";
            break;
        case 'yu':
            cout << amount << " yuan equals " << amount*0.13 << " euros.\n";
            break;
        case 'k':
            cout << amount << " kroner equals " << amount*0.1 << " euros.\n";
            break;
        case 'p':
            cout << amount << " pounds equals " << amount*1.16 << " euros.\n";
            break;
        default:
            cout << "Sorry, I don't know about the currency " << currency;
            break;
    }
}