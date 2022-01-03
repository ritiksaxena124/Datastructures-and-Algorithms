// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

#include <bits/stdc++.h>
using namespace std;

// SMALLEST ELEMENT ALWAYS LIES IN UNSORTED ARRAY
// MOVE TOWARDS THE UNSORTED ARRAY
int findMin(vector<int> &nums)
{
    int s = 0, e = nums.size() - 1;
    int sz = nums.size();
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        int next = (mid + 1) % sz; // IF MID IS AT LAST INDEX THEN NEXT WILL BE AT 0TH INDEX
        int prev = (mid + sz - 1) % sz; // IF MID IS AT 0TH INDEX THEN PREV WILL BE AT LAST INDEX
        
        // CONDITION TO CHECK IF THE CURRENT ELEMENT IS SMALLEST ELEMENT OR NOT
        if (nums[mid] <= nums[next] && nums[mid] <= nums[prev])
        {
            // SMALLEST ELEMENT FOUND
            return nums[mid];
        }
        else if (nums[mid] <= nums[e])
        { // ARRAY IS SORTED FROM MID TO E
            e = mid - 1;
        }
        else if (nums[s] <= nums[mid])
        {// ARRAY IS SORTED FROM S TO MID
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    cout << findMin(arr);
}