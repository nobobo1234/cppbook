#include "../../std_lib_facilities.h"

int main() {
    cout << "Please enter your first name and age\n";
    string first_name = "???";
    double age = 0;
    cin >> first_name >> age;
    cout << "Hello, " << first_name << " (age in months " << age*12 << ")\n";
    return 0;
}
