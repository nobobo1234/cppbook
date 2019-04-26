#include "../../std_lib_facilities.h"

int main() {
    cout << "Enter a spelled-out number you want converted to a digit (0, 1, 2, 3 and 4 are supported.\n";
    string spellednumber = "";
    cin >> spellednumber;
    string message = "Not a number I know";
    if(spellednumber == "zero")
        message = "Your number is 0";
    if(spellednumber == "one")
        message = "Your number is 1";
    if(spellednumber == "two")
        message = "Your number is 2";
    if(spellednumber == "three")
        message = "Your number is 3";
    if(spellednumber == "four")
        message = "Your number is 4";
    cout << message;
}