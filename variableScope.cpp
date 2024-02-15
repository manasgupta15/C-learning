#include<iostream>
using namespace std;
int myNum = 3;
void printNum();
int main()
{
    //! Local Variable = declared inside a function or block {}
    //! Global variable = declared outside of all functions

    // ? To use the global version of scope we use ::

    int myNum = 1;
    cout << ::myNum << endl;
    printNum();
    return 0;
}
void printNum() {
    int myNum = 2;
    cout<<myNum;
}