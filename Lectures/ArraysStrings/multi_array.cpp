#include <iostream>
using namespace std;

int main() {
    int twod_Array[2][4];
    twod_Array[0][0] = 6;
    twod_Array[0][1] = 0;
    twod_Array[0][2] = 9;
    twod_Array[0][3] = 8;
    twod_Array[1][0] = 5;
    twod_Array[1][1] = 0;
    twod_Array[1][2] = 1;
    twod_Array[1][3] = 1;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cout << twod_Array[i][j] << " ";
        }
    }
    cout << endl;
    return 0;
}
