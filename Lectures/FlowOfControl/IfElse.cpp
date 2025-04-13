#include <iostream>
using namespace std;

int main() {
    int x = 6;
    int y = 2;

    if (x > y) {
        cout << "x is greater than y\n" << endl; // Output: x is greater than y
    } else if (x < y) {
        cout << "x is less than y\n" << endl;
    } else {
        cout << "x is equal to y\n" << endl;
    }

    return 0;
}
