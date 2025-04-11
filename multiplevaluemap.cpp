#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    map<string, vector<int>> mp;

    
    mp["joy"].push_back(123);
    mp["joy"].push_back(345);
    mp["joy"].push_back(876);
    mp["honey"].push_back(124);
    mp["sunny"].push_back(287);

    // Printing the map contents
    for (auto p : mp) {
        cout << p.first << " ";
        for (auto m : p.second) {
            cout << m << " ";
        }
        cout << "\n";
    }

    return 0;
}