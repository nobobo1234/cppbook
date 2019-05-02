#include "../../std_lib_facilities.h"

int main() {
    string name = "";
    int score = 0;
    
    vector<string> names;
    vector<int> scores;
    
    cout << "Enter a name with a score. e.g. 'John 3'\n";
    cout << "Terminate by writing: 'NoName 0'\n";
    while(cin >> name >> score) {
        if(find(names.begin(), names.end(), name) == names.end()) {
            names.push_back(name);
            scores.push_back(score);
        } else if(name == "NoName" && score == 0) {
            break;
        } else {
            cout << "A name cannot be entered twice. Try another name.\n";
        }
    } 

    cout << "All the names and scores are:\n";
    for(int i = 0; i < names.size(); ++i) {
        cout << names[i] << " " << scores[i] << '\n';
    }
}