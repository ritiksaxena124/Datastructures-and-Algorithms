// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

#include <bits/stdc++.h>
using namespace std;

vector<int> findDisappearedNumbers(vector<int> &nums)
{
    vector<int> ans;
    int sz = nums.size();
    int i = 0;
    while (i < sz)
    {
        if (nums[i] != nums[nums[i] - 1])
            swap(nums[i], nums[nums[i] - 1]);
        else
            i++;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != i + 1)
            ans.push_back(i + 1);
    }
    return ans;
}

int main()
{
    vector<int> arr = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> ans = findDisappearedNumbers(arr);

    for (auto i : ans)
        cout << i << " ";
}