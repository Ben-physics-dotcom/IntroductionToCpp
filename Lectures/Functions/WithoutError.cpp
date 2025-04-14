#include <iostream>
using namespace std;

char* foo() {
    char* p = new char[5]; // Dynamically allocate memory
    p = "hello";
    return p;
}

int main() {
    char* result = foo();
    cout << result << endl; // This will cause a compilation error
    return 0;
}
