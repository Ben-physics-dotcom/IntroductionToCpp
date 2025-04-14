#include <iostream>
using namespace std;

int raiseToPower(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int base = 3, exponent = 4;

    int result = raiseToPower(base, exponent);
    cout << base << " raised to the power of " << exponent << " is " << result << endl;

    return 0;
}
