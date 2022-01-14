// https://leetcode.com/problems/permutations/

#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> nums, int idx, vector<vector<int>> &ans)
{
    // Base Case
    if (idx >= nums.size())
    {
        ans.push_back(nums);
        return;
    }

    for (int j = idx; j < nums.size(); j++)
    {
        swap(nums[idx], nums[j]);
        solve(nums, idx + 1, ans);
        // Backtracking
        swap(nums[idx], nums[j]);
    }
}

vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    int idx = 0;
    solve(nums, idx, ans);

    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3};

    vector<vector<int>> ans = permute(arr);

    for (auto i : ans)
    {
        cout << "[ ";
        for (auto j : i)
        {
            cout << j << ",";
        }
        cout << " ]" << endl;
    }
    return 0;
}