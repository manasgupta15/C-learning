#include<iostream>
using namespace std;

int main()
{
    // ternary operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression2

    int age;
    cout << "Enter your age?" << endl;
    cin >> age;

    age>=18 ? cout << "You are above 18" : cout << "You are less than 18";
    cout << endl;
    int number = 9;
    number % 2 == 1 ? cout << "odd" : cout << "even";
    cout << endl;

    bool hungry = true;
    hungry ? cout << "You are hungry" : cout << "You are not hungry";
    return 0;
}
