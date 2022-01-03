// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

#include <bits/stdc++.h>
using namespace std;

int first(vector<int>& nums, int target)
{
    int ans = -1; // assume target is not present
    int s = 0, e = nums.size() - 1;
    while(s <= e)
    {
        int mid = s + (e-s)/2;
        if(nums[mid] == target)
        {
            // this can be our possible answer 
            ans = mid;
            // search in left side for another possible answers
            e = mid - 1;
        }
        else if(nums[mid] > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int last(vector<int>& nums, int target)
{
    int ans = -1; // assume target is not present
    int s = 0, e = nums.size() - 1;
    while(s <= e)
    {
        int mid = s + (e-s)/2;
        if(nums[mid] == target)
        {
            // this can be our possible answer 
            ans = mid;
            // search in right side for another possible answers
            s = mid + 1;
        }
        else if(nums[mid] > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

void searchRange(vector<int> &nums, int target)
{
    int firstOccurence = first(nums, target);
    int lastOccurence = last(nums, target);

    cout << "[" << firstOccurence << ", " << lastOccurence << "]";
}

int main()
{
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;
    searchRange(nums, target);
}