#include <iostream>
using namespace std;

int main() {
    const int size = 5;  // Change the size according to your array size
    int myArray[size];

    int initialValue = 42;  // Change the initial value as needed

    // Initializing the array with a single value
    for (int i = 0; i < size; ++i) {
        myArray[i] = initialValue;
    }

    // Printing the initialized array
    cout << "Initialized array:";
    for (int i = 0; i < size; ++i) {
        cout << " " << myArray[i];
    }
    cout << endl;

    return 0;
}
