#include<iostream>
using namespace std;
namespace first{
    int x = 1;
}
namespace second
{
    int x = 2;
}

int main() {
    // Namespace = provides a solution for preventing name conflicts
    // in large projects. Each entity needs a uniquie name. A namespace
    // allows for identically named entities as long as the namespace are different.

    int x = 0;
    cout <<x << endl;
    cout <<first::x << endl;
    cout <<second::x << endl;
}
