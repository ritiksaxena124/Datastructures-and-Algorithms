#include<bits/stdc++.h>
using namespace std;

// ITERATIVE SOLUTION -> COMPLEXITY O(log(b))
int power(int a, int b)
{
    int res = 1;
    while(b > 0)
    {
        if(b & 1)
        {
            // WHEN POWER IS ODD
            res = res * a;
        }
        a = a * a;
        b = b>>1;
    }
    return res;
}

int main()
{
    int a = 2, b = 4;
    cout << power(a, b);
}