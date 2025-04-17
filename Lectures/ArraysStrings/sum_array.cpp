#include <iostream>
using namespace std;

int sum(const int array[], const int length) {
    long sum = 0;
    for (int i = 0; i < length; i++) {
        sum += array[i];
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 30,4, 5, 6};
    cout << "The sum of the array is: " << sum(arr, sizeof(arr) / sizeof(arr[0])) << endl;
    return 0;
}
