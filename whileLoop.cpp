#include<iostream>
using namespace std;
int main()
{
    string name;
    while(name.empty()) {
        cout << "Enter your Name? " << endl;
        getline(cin,name);
    }

    cout << "Your name is: " << name << endl;
}