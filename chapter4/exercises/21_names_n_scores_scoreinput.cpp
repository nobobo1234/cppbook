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

    cout << "\nEnter a score you want to search for...:\n";
    int searched_score = 0;
    cin >> searched_score;
    bool found_score = false;
    for(int i = 0; i < scores.size(); ++i) {
        if(searched_score == scores[i]) {
            found_score = true;
            cout << names[i] << " has a score of " << scores[i] << '\n';
        }
    }
    if(!found_score) {
        cout << "There are no names with a score of " << searched_score << '\n';
    }
}