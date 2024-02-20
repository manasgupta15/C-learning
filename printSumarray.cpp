#include<iostream>
using namespace std;

int main()
{
    int sum = 0;
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    cout << "Printing the sum of the array: " << endl;
    for(int i = 0; i<size; i++) {
        sum = sum + arr[i];
    }
    cout << sum;
    return 0;
}