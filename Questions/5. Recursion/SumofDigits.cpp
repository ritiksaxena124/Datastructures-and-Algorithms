#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int n)
{
    // BASE CASE
    if(n == 0) return 0;

    // RECURSIVE FORMULA
    int lastDigit = n % 10;
    return lastDigit + sumOfDigits(n/10);
}

int main()
{
    int n = 134521;
    cout << sumOfDigits(n);
}