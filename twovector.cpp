//vector inside vector is called 2d vector

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<vector<int>> v1;
    int row, col;  // Fixed missing semicolon

    int val;
    cout << "Enter size of row: ";
    cin >> row;
    cout << "Enter size of column: ";
    cin >> col;

    for (int i = 0; i < row; i++) {
        vector<int> v2;  // Fixed missing semicolon
        for (int j = 0; j < col; j++) {
            cout << "Enter value: ";
            cin >> val;
            v2.push_back(val);
        }
        v1.push_back(v2);
    }

    cout << "Stored values in 2D vector:\n";
    for (int i = 0; i < v1.size(); i++) {
        for (int j = 0; j < v1[i].size(); j++) {
            cout << v1[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;  // Added return statement
}