#include "../../std_lib_facilities.h"

int main() {
    cout << "Miles to kilometer converter!\nPlease input the amount of miles:\n";
    double miles = 0;
    cin >> miles;
    cout << "There are " << miles*1.609 << " kilometers in " << miles << " mile(s)\n";
}