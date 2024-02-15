#include<iostream>
using namespace std;
void printName(string word , int age) {
    cout << "Happy Birthday to you! " << word<< "\nYou are " << age << " years old" << endl;
}
int main() {
    string name = "Manas";
    int age = 21;
    printName(name,age);
    return 0;
}