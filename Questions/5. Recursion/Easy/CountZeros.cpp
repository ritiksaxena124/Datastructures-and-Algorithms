#include<bits/stdc++.h>
using namespace std;

int helper(int n, int cnt)
{
    if(n == 0) return cnt;
    int lastDigit = n % 10;
    if(lastDigit == 0) return helper(n / 10, ++cnt);
    return helper(n/10, cnt);
}

int count(int n)
{
    return helper(n, 0);
}

int main()
{
    int n = 302000004;
    cout << count(n);
    return 0;
}