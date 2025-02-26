#include <iostream>
using namespace std;

template <typename v1>
class Cybrom {
    v1 a;

public:Cybrom(v1 x) {
        a = x;
    }

    v1 fact() {
        if (a < 0) {
            cout << "Factorial is not defined for negative numbers." << endl;
            return 1;
        }

        v1 factorial = 1;
        for (int i = 1; i <= a; i++) {
            factorial =factorial * i;
            cout << i;
            if (i < a)
                cout << " * ";
        }

        cout << " = " << factorial << endl;
        return factorial;
    }
};

int main() {
    Cybrom<int> obj(5);
    cout << "Factorial: " << obj.fact() << "\n";
    return 0;
}

