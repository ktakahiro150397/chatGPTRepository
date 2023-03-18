cpp
#include <iostream>
#include <exception>

using namespace std;

int sumArray(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    try {
        int sum = sumArray(arr, size);
        cout << "Sum of array: " << sum << endl;
    } catch (const char* msg) {
        cerr << msg << endl;
    }

    int* nullArr = NULL; // a sample null array
    size = 0; // size of null array is zero
    try {
        int sum = sumArray(nullArr, size);
        cout << "Sum of null array: " << sum << endl;
    } catch (const char* msg) {
        cerr << msg << endl;
    }

    return 0;
}

