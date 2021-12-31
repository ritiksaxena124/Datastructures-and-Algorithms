// https://leetcode.com/problems/missing-number/

#include<bits/stdc++.h>
using namespace std;

// BASIC MATHEMATICS
int missingNumber(vector<int> &nums) 
{
    int sum = 0;
    int sz = nums.size();

	for(int i=0;i<sz;i++)
    {
        sum += nums[i];
    }
    int sum2 = (sz * (sz + 1)) / 2;
    return abs(sum2 - sum);

}
// USING CYCLIC SORT
int MissingNumber(vector<int> &nums)
{
    int sz = nums.size();
    int i = 0;
    while(i < sz)
    {
        if(nums[i] >= sz || nums[i] == i){ 
            i++;
            continue;
        }
        if(i != nums[i])
        {
            swap(nums[i], nums[nums[i]]);
        }
    }

    for(int i = 0; i < sz; i++)
    {
        if(nums[i] != i) return i;
    }
    return sz;
}

int main()
{	
    vector<int> arr = {9,6,4,2,3,5,7,0,1};
    cout << missingNumber(arr) << endl;
    cout << MissingNumber(arr) << endl;
}