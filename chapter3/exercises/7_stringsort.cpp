#include "../../std_lib_facilities.h"

int main() {
    cout << "Input 3 names\n";
    string string1 = "";
    string string2 = "";
    string string3 = "";
    cin >> string1 >> string2 >> string3;
    if(string2 < string1) {
        string swap_string2 = string2;
        string2 = string1;
        string1 = swap_string2;
    }
    if(string1 > string3) {
        string swap_string3 = string3;
        string3 = string1;
        string1 = swap_string3;
    }
    if(string2 > string3) {
        string swap_string2 = string2;
        string2 = string3;
        string3 = swap_string2;
    }
    cout << string1 << ", " << string2 << ", " << string3;
}