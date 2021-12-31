// https://leetcode.com/problems/find-the-duplicate-number/

#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) 
{
    int ans = -1;
    int i = 0;
    int sz = nums.size();
    while(i < sz)
    {
        if(nums[i] != nums[nums[i] - 1]) swap(nums[i], nums[nums[i] - 1]);
        else i++;
    }        

    for(int i = 0; i < sz; i++)
    {
        if(nums[i]-1 != i) ans = nums[i];
    }
    return ans;
}

int main()
{
    vector<int> arr = {1,3,4,2,2};
    cout << findDuplicate(arr);
    return 0;
}