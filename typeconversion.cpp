#include<iostream>
using namespace std;

int main()
{
    /*
    type conversion -> conversion a value of one data type to another
    Implicit = automatic
    Explicit = precede value with new data type (int)
    */

    double x = (int)3.14;
    cout << x << endl;

    char x1 = 100;
    cout << x1 << endl;

    int correct = 8;
    int questions = 10;

    double score = correct / (double)questions * 100;
    cout << score << "% "<< endl;
    return 0;
}
