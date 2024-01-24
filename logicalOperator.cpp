#include<iostream>
using namespace std;

int main() 
{
    // && = check if two conditions are true
    // ||  = check if at least one of two conditions are true
    // ! = reverse the logical state of of its operand

    int temp;
    cout << "Enter the temperature" << endl;
    cin >> temp;

    if(temp > 0 && temp < 30) {
        cout << "The temperature is good!";
    } else {
        cout << "the temperature is bad";
    }

    if(temp <= 0 || temp >= 30) {
        cout << "The temperature is bad!";
    } else {
        cout << "the temperature is good!";
    }

    bool sunny = true;
    if(!sunny) {
        cout << "It is sunny outside!";
    } else {
        cout << "It is cloudy outside";
    }
    return 0;
}