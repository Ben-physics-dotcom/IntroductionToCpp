#include <iostream>
using namespace std;

int main() {
    int x = 6;

    switch (x) {
        case 1:
            cout << "x is 1\n" << endl;
            break;
        case 2:
            cout << "x is 2\n" << endl;
            break;
        case 3:
            cout << "x is 3\n" << endl;
            break;
        default:
            cout << "x is not 1, 2, or 3\n" << endl;
    }
}
