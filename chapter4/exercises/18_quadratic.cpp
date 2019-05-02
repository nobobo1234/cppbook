#include "../../std_lib_facilities.h"

double discrim(double a, double b, double c) {
    return b*b-4*a*c;
}

vector<double> quadratic_formula(const double a, const double b, const double c) {
    double discriminator = discrim(a, b, c);
    if(discriminator > 0) {
        return {(-b+sqrt(discriminator))/(2*a), (-b-sqrt(discriminator))/(2*a)};
    } else if(discriminator == 0) {
        return {(-b+sqrt(discriminator))/(2*a)};
    } else {
        return {};
    }
} 

int main() {
    // Ask for all the values
    cout << "Quadratic Equation Solver.\n"
        << "Please input your a: ";
    double a = 0, b = 0, c = 0;
    cin >> a;
    if(a == 0) {
        cout << "a cannot be zero, falling back to a = 1.\n";
        a = 1;
    }
    cout << "Please input your b: ";
    cin >> b;
    cout << "Please input your c: ";
    cin >> c;

    cout << "Your quadratic equation is: " << a << "x^2";
    if(b < 0) {
        cout << " - " << abs(b) << "x";
    } else if(b == 0) {
        cout << " + x";
    } else if(b > 0) {
        cout << " + " << b << "x";
    }

    if(c < 0) {
        cout << " - " << abs(c);
    } else if(c >= 0) {
        cout << " + " << c;
    }
    cout << '\n';

    double discriminator = discrim(a, b, c);
    cout << "The discriminator is: " << discriminator << '\n';
    if(discriminator == 0) {
        cout << "Your equation only has 1 real solution.\n";
        vector<double> solution = quadratic_formula(a, b, c);
        cout << "Your solution is:\n" 
            "x = " << solution[0] << '\n';
    } else if(discriminator > 0) {
        cout << "Your equation has 2 real solutions.\n";
        vector<double> solutions = quadratic_formula(a, b, c);
        cout << "Your solutions are:\n"
            << "x1 = " << solutions[0] << '\n'
            << "x2 = " << solutions[1] << '\n';
    } else if(discriminator < 0) {
        cout << "Your equation has no real solutions.\n";
    }
}