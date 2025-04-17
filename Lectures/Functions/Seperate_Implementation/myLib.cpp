#include <iostream>
#include "myLib.h"
using namespace std;

int cube(int x) {
    return x * x * x;
}

int square(int x) {
    return x * x;
}

int main() {
    int num = 5;
    cout << "The square of " << num << " is " << square(num) << endl;
    cout << "The cube of " << num << " is " << cube(num) << endl;
    return 0;
}
