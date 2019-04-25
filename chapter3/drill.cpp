#include "../std_lib_facilities.h"

int main() {
    cout << "Enter the name of the person you want to write to (followed by an enter):\n";
    string first_name = "";
    cin >> first_name;
    cout << "Name another friend of yours:\n";
    string friend_name = "";
    cin >> friend_name;
    cout << "What is the sex of that friend? Write m for male and f for female\n";
    char friend_sex = 0;
    cin >> friend_sex;
    cout << "What is the age of the recipient?\n";
    int age = 0;
    cin >> age;
    if(age < 0 || age > 110)
        simple_error("You're kidding!");
    cout << '\n' << "Dear " << first_name << ",\n\n";
    cout << "How are you? I am fine. I miss you.\n";
    cout << "Have you seen " << friend_name << " lately? I really want to speak to my friend.\n";
    if(friend_sex == 'm')
        cout << "If you see " << friend_name << " please ask him to call me.\n";
    if(friend_sex == 'f')
        cout << "If you see " << friend_name << " please ask her to call me.\n";
    cout << "I hear you just had a birthday and you are " << age << " years old.\n";
    if(age < 12)
        cout << "Next year you will be " << age+1 << ".\n";
    if(age == 17)
        cout << "Next year you will be able to vote." << '\n';
    if(age > 70)
        cout << "I hope you are enjoying retirement.\n";
    cout << "Yours sincerely,\n\nNoah van Boven.";
}