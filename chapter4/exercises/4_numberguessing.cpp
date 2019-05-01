#include "../../std_lib_facilities.h"

int main() {
    int current_guess = 50;
    int iteration = 1;

    cout << "Think of a number between 1 and 100\n"
        << "Is your number you're thinking of equal to, greater than, or less than " << current_guess << "?\n"
        << "Enter 'equals', 'less' or 'greater'.\n";
    for(string answer; cin >> answer;) {
        if(iteration > 7) {
            cout << "You must be lying because I always guess it within 7 tries ;-). Try again\n";
            break;
        }

        if(answer == "equals") {
            cout << "Yay! I guessed your number, it was: " << current_guess << '\n';
            break;
        } else if(answer == "less") {
            current_guess = current_guess - 50/pow(2, iteration);
            cout << "Is your number you're thinking of equal to, greater than, or less than " << current_guess << "?\n";
        } else if(answer == "greater") {
            current_guess = current_guess + 50/pow(2, iteration);
            cout << "Is your number you're thinking of equal to, greater than, or less than " << current_guess << "?\n";
        } else {
            cout << "Sorry, but I can't do anything with this input. Enter something valid.\n";
        }
        ++iteration;
    }
}