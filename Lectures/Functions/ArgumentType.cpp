#include <iostream>

using namespace std;

void printOnNewLine(int x) {
    cout << x << endl;
}

void printOnNewLine2(char *x) {
    cout << x << endl;
}

int main() {
    printOnNewLine(5);
    // printOnNewLine("Hello World"); // This will not work as expected

    // printOnNewLine2(32); // This will not work as expected
    printOnNewLine2("Hello World"); // This will work as expected
}
