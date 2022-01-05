// https://leetcode.com/problems/sqrtx/

#include <bits/stdc++.h>
using namespace std;
int mySqrt(int x)
{
    int s = 0, e = x / 2 + 1;
    long ans = -1;
    while (s <= e)
    {
        long mid = s + (e - s) / 2;
        // INT*INT = MAY OVERFLOW THE VALUE OF INT, SO TO HANDLE THIS WE HAVE TAKEN THE DATATYPE AS LONG
        long sq = (mid * mid);
        if (sq == x)
            return mid;
        else if (sq < x)
        {
            ans = mid;
            s = mid + 1;
        }
        else
            e = mid - 1;
    }
    return ans;
}

int main()
{
    int n = 37;
    cout << mySqrt(n);
}