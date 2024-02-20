#include<iostream>
using namespace std;

int main()
{
    int arr[4] = {2, 7, 5, 9};
    int left = 0; // Start from the beginning of the array
    int right = 3; // Start from the end of the array

    // Swap elements using the two-pointer approach
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }

    cout << "Printing the reversed array:" << endl;
    for(int i = 0; i < 4; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
