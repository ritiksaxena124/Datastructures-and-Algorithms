#include <iostream>
using namespace std;
/*
APPROACH: USING TWO POINTERS IN ARGUMENT
bool isPalindrome(string s, int i, int j)
{
    // base case
    if (i >= j)
    {
        return true;
    }
    if (s[i] != s[j])
    {
        return false;
    }
    return isPalindrome(s, i + 1, j - 1);
}
*/

// USING SINGLE ARGUMENT
bool isPalindrome(string str, int i)
{
    int n = str.size();

    //  base case
    if (i >= n / 2)
    {
        return true;
    }
    if (str[i] != str[n - i - 1])
    {
        return false;
    }
    return isPalindrome(str, i + 1);
}
int main()
{

    string str = "abcdca";
    /*
    CHECK PALINDROME USING FUNCTION TAKING TWO POINTER AS ARGUMENTS
    if (isPalindrome(str, 0, str.size() - 1))
        cout << "Palindrome";
        */

    // USING SINGLE ARGUMENT
    if (isPalindrome(str, 0))
    {
        cout << "Palindrome";
    }
    else
        cout << "Not a Palindrome";
    return 0;
}