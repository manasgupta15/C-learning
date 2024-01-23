#include<iostream>
using namespace std;
int main()
{
    int students = 20;
    students += 1;
    students ++ ;
    students -= 1;
    students --;

    students *= 2;
    students /= 2;
    cout << students << endl;

    int remainder = students % 2;
    cout << remainder << endl;

    // parenthesis
    // multiplication and division
    // addition and subtraction

    int student = 6-5+4*3/2;
    cout << student << endl;


    return 0;
}
