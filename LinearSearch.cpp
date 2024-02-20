#include<iostream>
using namespace std;
bool printSearch(int arr[], int size , int key) {
    for(int i=0;i<size;i++){
        if(key == arr[i]) {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[10] = {5,7,-2,10,22,-2,0,5,22,1};
    // whether 1 is present in the array or not
    cout << "Enter the key " << endl;
    int key;
    cin >> key;

    bool found = printSearch(arr,10,key);

    if(found) {
        cout << "key is present in the array" << endl;
    } else {
        cout << "key is not present in the array " << endl;
    }
    return 0;
}