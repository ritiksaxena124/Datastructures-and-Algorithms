// https://leetcode.com/problems/subsets/

#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> nums, int idx, vector<int> output, vector<vector<int>>& ans)
{
    // base case
    if(idx >= nums.size())
    {
        ans.push_back(output);
        return;
    }

    // exclude
    solve(nums, idx+1, output, ans);

    // include
    int ele = nums[idx];
    output.push_back(ele);
    solve(nums, idx+1, output, ans);
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(nums, index, output, ans);
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans = subsets(arr);

    for(auto i : ans)
    {
        for(auto j : i)
        {
            cout << j << " ";
        }
        cout<<endl;
    }
}