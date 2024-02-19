#include<bits/stdc++.h>
using namespace std;

int getMax(int num[], int n) {
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (num[i] > max) {
            max = num[i];
        }
    }
    return max;  // Add the return statement
}

int getMin(int num[], int n) {
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (num[i] < min) {
            min = num[i];
        }
    }
    return min;  // Add the return statement
}

int main() {
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;

    int arr[1000];
    cout << "Enter the number of elements in the array: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "The maximum element of the array is: " << getMax(arr, size);
    cout << endl;
    cout << "The minimum element of the array is: " << getMin(arr, size);
    cout << endl;

    return 0;
}
