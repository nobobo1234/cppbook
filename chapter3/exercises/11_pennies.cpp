#include "../../std_lib_facilities.h"

int main() {
    int pennies = 0; // 1 cent
    int nickels = 0; // 5 cent
    int dimes = 0; // 10 cent
    int quarters = 0; // 25 cent
    int half_dollars = 0; // 50 cent
    int dollars = 0; // 100 cent / 1 dollar
    cout << "How many pennies (1-cent coins) do you have?\n";
    cin >> pennies;
    cout << "How many nickels (5-cent coins) do you have?\n";
    cin >> nickels;
    cout << "How many dimes (10-cent coins) do you have?\n";
    cin >> dimes;
    cout << "How many quarters (25-cent coins) do you have?\n";
    cin >> quarters;
    cout << "How many half dollars (50-cent coins) do you have?\n";
    cin >> half_dollars;
    cout << "How many one-dollar coins do you have?\n";
    cin >> dollars;
    if(pennies == 1) 
        cout << "You have " << pennies << " penny.\n";
    if(pennies > 1)
        cout << "You have " << pennies << " pennies.\n";
    
    if(nickels == 1) 
        cout << "You have " << nickels << " nickle.\n";
    if(nickels > 1)
        cout << "You have " << nickels << " nickels.\n";
    
    if(dimes == 1) 
        cout << "You have " << dimes << " dime.\n";
    if(dimes > 1)
        cout << "You have " << dimes << " dimes.\n";
    
    if(quarters == 1) 
        cout << "You have " << quarters << " quarter.\n";
    if(quarters > 1)
        cout << "You have " << quarters << " quarters.\n";
    
    if(half_dollars == 1) 
        cout << "You have " << half_dollars << " half dollar.\n";
    if(half_dollars > 1)
        cout << "You have " << half_dollars << " half dollars.\n";
    
    if(dollars == 1) 
        cout << "You have " << dollars << " dollar.\n";
    if(dollars > 1)
        cout << "You have " << dollars << " dollars.\n";
    
    double sum = pennies + nickels*5 + dimes*10 + quarters*25 + half_dollars * 50 + dollars*100;
    
    cout << "The value of all your coins is $" 
        << sum/100
        << " dollars.\n";
}