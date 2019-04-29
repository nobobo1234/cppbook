#include "../std_lib_facilities.h"

int main() {
    double num = 0;
    double smallest = INFINITY;
    double largest = 0;
    double sum = 0;
    vector<double> all_values;
    string unit = "";

    cout << "Enter a random number followed by an unit (cm, m, in, ft):\n";
    while(cin >> num >> unit) {
        double in_m = 0;
        if(unit == "cm") in_m = num/100;
        else if(unit == "m") in_m = num;
        else if(unit == "in") in_m = num*2.54/100;
        else if(unit == "ft") in_m = num*2.54*12/100;
        else cout << "I don't know the unit " << unit;

        cout << num << unit << " is " << in_m << " meters\n";

        if(in_m <= smallest) {
            smallest = in_m;
        } else if(num >= largest) {
            largest = num;
        }
        sum += in_m;
        all_values.push_back(in_m);
    }

    sort(all_values);

    cout << "The largest value was: " << largest << "m\n"
        << "The smallest value was: " << smallest << "m\n"
        << "The sum of all the numbers in meters is: " << sum << "m\n";

    cout << "The values that were inputted were:\n";
    for(int i = 0; i < all_values.size(); ++i) {
        if(i == all_values.size() - 1)
            cout << all_values[i] << "m\n";
        else
            cout << all_values[i] << "m, ";
    }
    cout << '\n';
}

// int main() {
//     double num1 = 0;
//     double num2 = 0;
//     cout << "Enter two random numbers:\n";
//     while(cin >> num1 >> num2) {
//         if(num1 == num2) {
//             cout << "The numbers are equal\n";
//         } else if(abs(num2 - num1) < 1.0/100) {
//             cout << "The numbers are almost equal\n";
//         } else if(num1 < num2) {
//             cout << "The smaller value is: " << num1 << '\n';
//             cout << "The larger value is: " << num2 << '\n';
//         } else if (num2 < num1) {
//             cout << "The smaller value is: " << num2 << '\n';
//             cout << "The larger value is: " << num1 << '\n';
//         }
//     }
// }