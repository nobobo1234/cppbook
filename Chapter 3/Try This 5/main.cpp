#include "../../std_lib_facilities.h"

int main() {
    double d = 0;
    while(cin >> d) {
        int i = d;
        char c = i;
        int i2 = c;
        cout << "d == " << d << '\n'
            << "i == " << i << '\n'
            << "i2 == " << i2 << '\n'
            << "char(" << c << ")\n";
    }
}