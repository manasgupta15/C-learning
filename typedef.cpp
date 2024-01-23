#include<iostream>
#include<vector>
#include <utility>


using namespace std;
typedef vector<pair<int,int>>pairlist_t;
typedef string text_t;
typedef int number_t;


using text_t2 = string;
using number_t2 = int;

int main()
{
    /*
    typedef = reserved keyword used to create an additional name
    (alias) for another data type.
    New identifier for an existing type
    Helps with readability and reduces types
    used when there is a clear benefit
    replaced with 'using' (work better w/ templates)
    */

   pairlist_t pairlist(3);
    pairlist[0] = make_pair(1, 10);
    pairlist[1] = make_pair(2, 20);
    pairlist[2] = make_pair(3, 30);

    cout << "Pairlist: ";
    for (const auto& p : pairlist) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;


   text_t firstname= "Manas Gupta";
   cout << firstname << endl;

   number_t age = 21;
   cout << age <<endl;;

   number_t2 age2 = 21;
   cout << age2 << endl;

    return 0;
}
