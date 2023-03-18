cpp
#include <iostream>
#include <exception>

using namespace std;

template <typename T>
T sumArray(T *arr, int size) {
    T sum = 0;
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

    double doubleArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    size = sizeof(doubleArr) / sizeof(doubleArr[0]);
    try {
        double doubleSum = sumArray(doubleArr, size);
        cout << "Sum of double array: " << doubleSum << endl;
    } catch (const char* msg) {
        cerr << msg << endl;
    }

    return 0;
}

