// https://leetcode.com/problems/set-mismatch/

#include <bits/stdc++.h>
using namespace std;

vector<int> findErrorNums(vector<int> &nums)
{
    int sz = nums.size();
    int i = 0;
    while(i < sz)
    {
        if(nums[i] != nums[nums[i] - 1]){
            swap(nums[i], nums[nums[i] - 1]);
        }
        else i++;
    }

    for(int i = 0; i < sz; i++)
    {
        if(nums[i] != i+1) return {nums[i], i+1};
    }
    return {-1, -1};
}

int main()
{
    vector<int> arr = {1,2,2,4};
    vector<int> ans = findErrorNums(arr);
    for(auto i : ans) cout << i << " ";
    return 0;
}