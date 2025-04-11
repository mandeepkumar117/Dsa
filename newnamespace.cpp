#include <iostream>
using namespace std;

namespace cybrome {
    class myCompany {
    public:
        void cmpname() {
            cout << "The company name is: ";
        }

        void show() {
            cout << "Tata\n";
        }
    };
}

using namespace cybrome;

int main() {
    myCompany d; // Create an object of the class
    d.cmpname(); // Call the cmpname() method
    d.show();    // Call the show() method

    return 0;
}