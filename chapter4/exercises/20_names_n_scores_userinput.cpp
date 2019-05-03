#include "../../std_lib_facilities.h"

int main() {
    string name = "";
    int score = 0;
    
    vector<string> names;
    vector<int> scores;
    
    cout << "Enter a name with a score. e.g. 'John 3'\n";
    cout << "Terminate by writing: 'NoName 0'\n";
    while(cin >> name >> score) {
        if(name == "NoName" && score == 0) break;

        if(find(names.begin(), names.end(), name) == names.end()) {
            names.push_back(name);
            scores.push_back(score);
        } else {
            cout << "A name cannot be entered twice. Try another name.\n";
        }
    } 

    cout << "\nEnter a name you want to search for...:\n";
    string searched_name;
    cin >> searched_name;
    bool found_name = false;
    for(int i = 0; i < names.size(); ++i) {
        if(searched_name == names[i]) {
            found_name = true;
            cout << names[i] << " has a score of " << scores[i];
        }
    }
    if(!found_name) {
        cout << "The name " << searched_name << " is not found\n";
    }
}