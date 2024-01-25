#include<iostream>
using namespace std;
int main() 
{
    // do while loop = do some block of code first, THEN repeat again if condition is true

    // int number;
    // cout << "Enter a positive number!";
    //     cin >> number;
    // while(number<0) {
    //     cout << "Enter a positive number!";
    //     cin >> number;
    // }

    // cout << "The number is: " << number;

    int number;

    do{
        cout << "enter the positive number";
        cin>>number;
    }while(number<0);

    cout <<"The number is: " << number;
    return 0;
}