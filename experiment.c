#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, n, sum = 0; // Initialize sum to 0
    cout << "Enter range:" << endl;
    cin >> n;

    for (int i = 0; i < n; i++) { // Loop should run n times
        cout << "Enter a number:" << endl;
        cin >> num;
        sum += num; // Add num to sum
    }

    cout << "Summation: " << sum << endl; // Corrected spelling
    return 0; // Return statement added
}
