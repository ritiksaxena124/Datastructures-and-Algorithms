/*
Ceil of a number: Smallest Number GREATER than target or Number equal to the target
*/
#include <bits/stdc++.h>
using namespace std;

int ceil(vector<int> &nums, int target)
{
    int s = 0, e = nums.size();
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (nums[mid] == target)
            return nums[mid];
        else if (nums[mid] > target)
        {
            // THIS CAN BE OUR POSSIBLE ANS; STORE IT IN "ANS" VARIABLE AND SEARCH FOR MORE BETTER SOLUTION
            ans = nums[mid];
            e = mid - 1;
        }
        else
            s = mid + 1;
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 8, 10, 10, 12, 19};
    int target = 5;
    cout << ceil(arr, target);
}