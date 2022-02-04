#include<bits/stdc++.h>
using namespace std;

int helper(int n, int rev)
{
    if(n == 0) return rev;
    int lastDigit = n % 10;
    rev = rev * 10 + lastDigit;
    return helper(n / 10, rev);
}

int reverse(int n)
{
    return helper(n, 0);
}

int main()
{
    int n = 143345;
    cout << reverse(n);
    return 0;
}