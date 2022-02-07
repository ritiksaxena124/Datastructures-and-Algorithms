#include <iostream>
#include <vector>
using namespace std;

void subSequences(string str, int idx, string ans)
{
    // base case
    if (str.size() <= idx)
    {
        if (ans.size() != 0) // only difference between subsets and subsequences
            cout << ans << " ";
        return;
    }
    // excluding character
    subSequences(str, idx + 1, ans);

    // including character
    ans.push_back(str[idx]);
    subSequences(str, idx + 1, ans);
}

void subSequences(string str, int idx, string ans, vector<string> &subsets)
{
    // base case
    if (str.size() <= idx)
    {
        if (ans.size() != 0)
            subsets.push_back(ans);
        return;
    }

    // exclude character
    subSequences(str, idx + 1, ans, subsets);

    // include character
    ans.push_back(str[idx]);
    subSequences(str, idx + 1, ans, subsets);
}

int main()
{

    string s = "abc";
    subSequences(s, 0, "");
    cout << endl;
    vector<string> ans;
    string str = "abc";
    subSequences(str, 0, "", ans);

    // printing subsets
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}