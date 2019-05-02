#include "../../std_lib_facilities.h"

char who_won(const char move, const char opponent_move) {
    switch(move) {
        case 'r':
            if(opponent_move == 's') return 'r';
            else if(opponent_move == 'p') return 'p';
            else if(opponent_move == 'r') return 'n';
        case 'p':
            if(opponent_move == 's') return 's';
            if(opponent_move == 'r') return 'p';
            else if(opponent_move == 'p') return 'n';
        case 's':
            if(opponent_move == 's') return 'n';
            if(opponent_move == 'r') return 'r';
            if(opponent_move == 'p') return 's';
        default:
            return 'n';
    }
}

int main() {
    vector<char> rock_paper_scissors = {'r', 'p', 's'};
    cout << "Try: r (rock), p (paper), or s (scissors).\n";
    for(char move; cin >> move;) {
        char random_item = rock_paper_scissors[rand() % rock_paper_scissors.size()];
        char winning_one = who_won(move, random_item);
        cout << "I play " << random_item << '\n';
        if(winning_one == 'n') cout << "We both played the same.\n";
        else if(winning_one != move && winning_one != 'n') cout << "I win!\n";
        else if(winning_one == move && winning_one != 'n') cout << "Congratulations! You win!\n";
        cout << "Try again!\n";
    }
}