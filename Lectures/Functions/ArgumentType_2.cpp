#include <iostream>

using namespace std;

void printOnNewLine(int x) {
    cout << x << endl;
}

void printOnNewLine(char *x) { // C++ will give a warning here, that ISO C++ forbids converting a string constant to 'char*'
    cout << x << endl;
}

int main() {
    printOnNewLine(5);
    printOnNewLine("Hello World");
    return 0;
}
