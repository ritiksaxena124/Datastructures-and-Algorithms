#include<iostream>
using namespace std;

int setBits(int n)
{
    int cnt = 0;
    while(n > 0)
    {
        n = n - (n & -n); // n = n & (n-1); same
        cnt++;
    }
    return cnt;
}

int main()
{
    int n = 234567;
    cout << setBits(n);
    return 0;
}