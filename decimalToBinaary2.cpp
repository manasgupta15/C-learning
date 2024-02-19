#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int i = 0;

    // Handle the sign bit
    int sign = (n < 0) ? -1 : 1;
    n = abs(n);

    while(n != 0) {
        int bit = n & 1;
        ans = bit * pow(10, i) + ans;

        n = n >> 1;
        i++;
    }

    // Include the sign bit in the binary representation
    ans = sign * ans;

    cout << "Binary representation is: " << ans << endl;

    return 0;
}
