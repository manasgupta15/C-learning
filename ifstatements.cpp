#include<iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age? " << endl;
    cin >> age;

    if(age >= 18) {
        cout << "Welcome to the site!" << endl;
    }
    else if(age < 0) {
        cout << "You haven't born yet!" << endl;
    }
    else if(age >=100) {
        cout << "You are too old to enter this site!" << endl;
    }
    else {
        cout << "You are not enough old to enter!" << endl;
    }
    return 0;
}
