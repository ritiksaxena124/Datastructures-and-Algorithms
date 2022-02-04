#include <iostream>
using namespace std;

int reverse(int n, int rev)
{
    // base condition-> if only one digit return that digit
    if (n == 0)
    {
        return rev;
    }
    int lastDigit = n % 10;
    rev = rev * 10 + lastDigit;
    return reverse(n / 10, rev);
}

bool isPalindrome(int n)
{
    // base case -> only one digit, it is already palindrome
    if (n % 10 == n)
        return true;

    if (n == reverse(n, 0))
    {
        return true;
    }
    return false;
}

int main()
{
    int n = 12321;
    if (isPalindrome(n))
        cout << "True";
    else
        cout << "False";
    return 0;
}