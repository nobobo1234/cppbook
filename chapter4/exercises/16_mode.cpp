#include "../../std_lib_facilities.h"

int main() {
    int num = 0;
    int mode_number = 0;
    int mode_occurrences = 0;
    vector<int> numbers;
    cout << "Enter a sequence of numbers:\n";
    while(cin >> num) {
        numbers.push_back(num);
    }
    sort(numbers);
    for(int i = 1; i < numbers.size(); ++i) {
        if(numbers[i-1] != numbers[i] && i-mode_occurrences > mode_occurrences) {
            mode_number = numbers[i-1];
            mode_occurrences = i;
        }
    }
    cout << "The mode of your sequence is: " << mode_number << '\n';
}