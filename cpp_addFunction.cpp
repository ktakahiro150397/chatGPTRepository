cpp
#include <iostream>
#include <string>

using namespace std;

template <typename T>
T sumArray(T *arr, int size) {
    T sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int stringArrayLength(string *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i].length();
    }
    return sum;
}

int main() {
    string arr[] = {"a", "b", "c"};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = stringArrayLength(arr, size);
    cout << "Sum of string array: " << sum << endl;

    return 0;
}

