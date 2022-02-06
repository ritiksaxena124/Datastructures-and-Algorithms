// https://www.codingninjas.com/codestudio/problems/reverse-the-string_799927?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_13

#include <iostream>
using namespace std;

void reverse(string &s, int i)
{
    // base case
    int n = s.length();

    if (i > n / 2)
    {
        return;
    }

    swap(s[i], s[n - i - 1]);

    reverse(s, i + 1);
}

int main()
{
    string str = "abcde";
    reverse(str, 0);
    cout << str;
    return 0;
}