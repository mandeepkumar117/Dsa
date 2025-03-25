#include <iostream>
#include <unordered_set>
using namespace std;
bool isPangram(string s) {
    unordered_set<char> letters;
    for (char ch : s) {
        if (isalpha(ch)) {
            letters.insert(tolower(ch));
        }
    }
    return letters.size() == 26;
}
int main() {
    string s = "the quick brown fox jumps over the lazy dog";
    if (isPangram(s)) {
        cout << "It is a pangram string." << endl;
    } else {
        cout << "It is NOT a pangram string." << endl;
    }
    return 0;
}
