#include<iostream>
using namespace std;
int main()
{
    // ! break
    for(int i=1;i<=20;i++){
        if(i==13){
            break;
        }
        cout << i << endl;
    }
    // ! continue
    for(int i=1;i<=20;i++){
        if(i==13){
            continue;
        }
        cout << i << endl;
    }
}