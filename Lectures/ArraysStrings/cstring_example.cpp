#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char fragment1[] = "I'm a s";
    char fragment2[] = "tring!";
    char fragment3[20];
    char finalstring[20] = "";

    strcpy(fragment3, fragment1); // Copy fragment1 to fragment3
    strcat(finalstring, fragment3);
    strcat(finalstring, fragment2); // Concatenate fragment3 to finalstring
    cout << finalstring << endl; // Output: string!I'm a s
    return 0;
}
