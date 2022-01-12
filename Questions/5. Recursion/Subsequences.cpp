// https://www.codingninjas.com/codestudio/problems/subsequences-of-string_985087?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_16

#include <bits/stdc++.h>
using namespace std;

void solve(string str, int idx, string output, vector<string> &ans)
{
    // base case
    if (idx >= str.size())
    {
        // condition for empty set
        if (output.size() != 0)
        {
            ans.push_back(output);
        }
        return;
    }

    // exclude
    solve(str, idx + 1, output, ans);

    // include
    char ch = str[idx];
    output.push_back(ch);
    solve(str, idx + 1, output, ans);
}

vector<string> subsequences(string str)
{
    // Write your code here
    vector<string> ans;
    string output;
    int idx = 0;
    solve(str, idx, output, ans);

    return ans;
}

int main()
{
    string s = "abc";
    int idx = 0;

    vector<string> ans = subsequences(s);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}