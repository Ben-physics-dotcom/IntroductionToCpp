#include <iostream>

using namespace std;

#define pi 3.14159
#define newline '\n'

int main() {
    // 1.1
    double r = 5.0;
    double circle;

    circle = 2 * pi * r;
    cout << "The circumference of the circle is: " << circle << newline << endl;

    const int pathwidth = 100;

    const char tabulator = '\t';

    cout << "The tabolator is: " << tabulator << endl;
    cout << "The pathwidth is: " << pathwidth << newline << endl;

    // 1.3
    for (int i = 0; i < 10; i++) {
        cout << "The value of i is: " << i << newline << endl;
    }

    // 1.5 Type Conversion
    int x = (int) 5.7;
    short s = 3;
    long l = (long) s;
    float f = (float) s + 3.4;

    cout << "The value of x is: " << x << newline << endl;
    cout << "The value of s is: " << s << newline << endl;
    cout << "The value of l is: " << l << newline << endl;
    cout << "The value of f is: " << f << newline << endl;
    // 1.7
    int y = 4;
    int result;
    if (x > y) {
        result = x;
    }
    else {
        result = y;
    }
    cout << "The value of result is: " << result << newline << endl;
     // 1.9 break
     int i = 0;
     while (true) {
        if (i > 10) {
            break;
        }
        cout << "The value of i during while loop is: " << i << newline << endl;
        i++;
     }
    // 1.10 continue
    i = 0;
    for (; i <= 10; i++) {
        if (i % 2 != 0) {
            continue;
        }
        cout << "The value of i during for loop is: " << i << newline << endl;
    }
    return 0;
}
