#include <iostream>
using namespace std;

int divide(int numerator, int denominator, int &quotient) {
    if (denominator == 0) {
        cout << "Error: Division by zero!" << endl;
        return -1; // Error code
    }
    quotient = numerator % denominator;
    return numerator / denominator; // Return the remainder
}

int main() {
    int num = 14, den = 4;
    int rem;
    int result = divide(num, den, rem);
    cout << "Result: " << result << endl;
}
