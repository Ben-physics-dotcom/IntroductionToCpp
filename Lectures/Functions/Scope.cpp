/*
Scope describes if a name is visible in a certain part of the program.
Source: https://learn.microsoft.com/en-us/cpp/cpp/scope-visual-cpp?view=msvc-170
*/


#include <iostream>
using namespace std;

int numCalls = 0;
int raiseToPower(int base, int exponent) {
    numCalls++;
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int max(int a, int b) {
    numCalls++;
    int result;
    if (a > b) {
        result = a;
    } else {
        result = b;
    }
    return result;
}

double sqrt(double num) {
    double low = 1.0;
    double high = num;
    double estimate;
    for (int i = 0; i < 30; i++) {
        estimate = (low + high) / 2.0;
        if (estimate * estimate > num) {
            high = estimate;
        } else {
            low = estimate;
        }
    }
    return estimate;
}

int main() {
    int base = 2;
    int exponent = 3;
    int result = raiseToPower(base, exponent);
    cout << base << " raised to the power of " << exponent << " is " << result << endl;

    int maxresult = max(base, exponent);
    cout << "The maximum of " << base << " and " << exponent << " is " << maxresult << endl;

    double num = 18.5;
    double sqrtresult = sqrt(num);
    cout << "The square root of " << num << " is " << sqrtresult << endl;
    return 0;
}
