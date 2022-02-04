#include<iostream>
using namespace std;

int digitProd(int n)
{
    // base case -> if only one digit return that digit
    if(n % 10 == n){
        return n;
    }
    int lastDigit = n % 10;
    return lastDigit * digitProd(n / 10);
}

int main()
{
    int n = 12432;
    cout << digitProd(n);
    return 0;
}