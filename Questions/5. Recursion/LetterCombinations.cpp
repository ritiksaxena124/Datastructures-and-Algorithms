#include <iostream>
using namespace std;

void letterCombinations(string s1, string s2, int idx)
{
    // base case
    if (s2.size() <= idx)
    {
        cout << s1 << " ";
        return;
    }

    int digit = s2[idx] - '0'; // this will convert '2' to 2 i.e char to int

    for (int i = (digit - 2) * 3; i <= (digit - 1) * 3 - 1; i++)
    {
        char ch = 'a' + i;
        s1.push_back(ch);
        // recursive call
        letterCombinations(s1, s2, idx + 1);
        // backtracking
        s1.pop_back();
    }
}

int main()
{
    letterCombinations("", "23", 0);
    return 0;
}




/*
Link: https://leetcode.com/problems/letter-combinations-of-a-phone-number/submissions/
LeetCode solution:
// Above code is a base for this solution
class Solution {
    void solve(vector<string> &ans, string p, string s, int idx, map<char, string> mp)
    {
        // base case
        if(idx >= s.size()){
            ans.push_back(p);
            return;
        }
        
        string value = mp[s[idx]];
        for(int i = 0; i < value.size(); i++){
            p.push_back(value[i]);
            // recursive call
            solve(ans, p, s, idx+1, mp);
            // backtracking
            p.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        // base case
        if(digits.size() == 0){
            return ans;
        }
        map<char, string> mp;
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";
        
        solve(ans, "", digits, 0, mp);
        return ans;
    }
};
*/