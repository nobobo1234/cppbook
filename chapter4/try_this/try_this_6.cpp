#include "../../std_lib_facilities.h"

int main() {
    vector<string> disliked {"Broccoli", "Patates", "Licorice"};

    vector<string> words;
    for(string word; cin >> word;)
        words.push_back(word);

    for(string word : words) {
        bool contains_word = false;
        for(string crazy_word : disliked)
            if(crazy_word == word)
                contains_word = true;
        if(contains_word)
            cout << "BLEEP ";
        else
            cout << word << " ";    
    }   
}