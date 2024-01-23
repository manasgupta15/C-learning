#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double a,b,c,d;
    cout << "Enter the value of a: " << endl;
    cin >> a;
    cout << "Enter the value of b: " << endl;
    cin >> b;
    a = pow(a,2);
    b = pow(b,2);
    c = a + b;
    c = sqrt(c);

    cout << "The hypotenuse of triangle is: " << c << " cm" << endl;

    return 0;
}
