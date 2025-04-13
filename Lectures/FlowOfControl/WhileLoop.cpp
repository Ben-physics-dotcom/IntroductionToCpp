#include <iostream>
using namespace std;

int main() {
    int x = 0;
    while (x < 10) {
        x = x + 1;
        cout << "x is: " << x << '\n' << endl; // Output: x is: 1, x is: 2, ..., x is: 10
    }
    return 0;
}
