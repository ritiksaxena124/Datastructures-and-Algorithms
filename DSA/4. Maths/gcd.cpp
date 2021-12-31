#include<bits/stdc++.h>
using namespace std;

int Recursive_gcd(int a, int b)
{
    if(b == 0) return a;
    return Recursive_gcd(b, a % b);
}

int Iterative_gcd(int a, int b)
{
    if(b == 0) return a;
    if(a == 0) return b;

    while(a != b)
    {
        if(a > b) a = a - b;
        else b = b - a;
    }
    return a;
}


int main()
{
    int a = 24, b = 72;
    cout << Recursive_gcd(a, b) << endl;
    cout << Iterative_gcd(a, b);
}