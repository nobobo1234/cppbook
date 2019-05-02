#include "../../std_lib_facilities.h"

int main() {
    string current_mode = "";
    int mode_occurrences = 0;
    vector<string> strings;
    cout << "Enter a sequence of strings:\n";
    for(string input; cin >> input;) {
        strings.push_back(input);
    }
    sort(strings);
    for(string str : strings) {
        cout << str << '\n';
    }

    for(int i = 1; i < strings.size(); ++i) {
        if(strings[i-1] != strings[i] && i-mode_occurrences > mode_occurrences) {
            current_mode = strings[i-1];
            mode_occurrences = i-1;
        }
    }
    cout << "The min of your sequence is: " << strings[0] << '\n';
    cout << "The max of your sequence is: " << strings[strings.size()-1] << '\n';
    cout << "The mode of your sequence is: " << current_mode << '\n';
}