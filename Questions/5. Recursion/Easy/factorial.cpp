/*
    FACTORIAL OF A NUMBER: 
        fact(5) = fact(4) * 5
        fact(4) = fact(3) * 4;
        fact(3) = fact(2) * 3;
        fact(2) = fact(1) * 2;
        fact(1) = 1; -> BASE CASE
*/

#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    // BASE CASE
    if(n == 0 or n == 1) return 1;

    // RECURSIVE FORMULA
    return fact(n-1) * n; 
}

int main()
{
    int n = 3;
    cout << fact(n);
}