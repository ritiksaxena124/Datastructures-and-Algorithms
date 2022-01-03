// https://leetcode.com/problems/search-in-rotated-sorted-array/

#include <bits/stdc++.h>
using namespace std;

int findIndex(vector<int> &nums)
{
    int s = 0, e = nums.size() - 1;
    int sz = nums.size();
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        int next = (mid + 1) % sz;
        int prev = (mid + sz - 1) % sz;

        if (nums[mid] <= nums[next] and nums[mid] < nums[prev])
            return mid;

        else if (nums[mid] <= nums[e])
            e = mid - 1;
        else if (nums[s] <= nums[mid])
            s = mid + 1;
    }
    return -1;
}

int binarySearch(vector<int> &nums, int s, int e, int target)
{
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
            e = mid - 1;
        else
            s = mid + 1;
    }
    return -1;
}
int search(vector<int> &nums, int target)
{
    if (nums.size() == 1)
    {
        if (nums[0] == target)
            return 0;
        return -1;
    }
    int index = findIndex(nums);
    return (binarySearch(nums, 0, index - 1, target) + binarySearch(nums, index, nums.size() - 1, target) + 1);
}
int main()
{
    vector<int> arr = {4,5,6,7,0,1,2};
    int target = 0;
    cout << search(arr, target);
}