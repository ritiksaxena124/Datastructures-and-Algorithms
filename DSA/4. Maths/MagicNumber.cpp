#include <iostream>

using namespace std;

int nthMagicNumber(int n)
{
    int ans = 0;
    int base = 5;
    while (n > 0)
    {
        int lastDigit = (n & 1); // this will give the last digit in binary representation of a number
        ans += lastDigit * base;
        base = base * 5;
        n = n >> 1;
    }
    return ans;
}

int main()
{
    int n = 3;
    int ans = nthMagicNumber(n);
    cout << ans;
    return 0;
}