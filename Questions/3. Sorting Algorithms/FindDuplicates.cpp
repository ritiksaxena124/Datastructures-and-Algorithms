// https://leetcode.com/problems/find-all-duplicates-in-an-array/

#include<bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) 
{
    int sz = nums.size();
    int i = 0;
    vector<int> ans;
    while(i < sz)
    {
        if(nums[i] != nums[nums[i] - 1]) swap(nums[i], nums[nums[i] - 1]);
        else i++;
    }        

    for(int i=0;i<sz;i++)
    {
        if(nums[i] != i+1) ans.push_back(nums[i]);
    }
    return ans;
}

int main()
{
    vector<int> arr = {4,3,2,7,8,2,3,1};
    vector<int> ans = findDuplicates(arr);

    for(auto i : ans) cout << i << " ";

}