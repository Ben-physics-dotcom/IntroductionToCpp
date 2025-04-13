#include <iostream>
using namespace std;

int main() {
    for (int x = 0; x < 10; x = x + 1) {
        cout << "x is: " << x << '\n' << endl; // Output: x is: 0, x is: 1, ..., x is: 9
    }
    return 0;
}
