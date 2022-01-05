// https://leetcode.com/problems/peak-index-in-a-mountain-array/
// PEAK ELEMENT IS THAT ELEMENT WHICH IS LARGER THAN ITS LEFT AND RIGHT NEIGHBOUR

#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& arr)
{
    int s = 0, e = arr.size() - 1;
    if (arr[0] > arr[1])
        return 0;
    int n = arr.size() - 1;
    if (arr[n] > arr[n - 1])
        return n;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (mid == 0)
            s = s + 1;
        else if (arr[mid] > arr[mid - 1])
            s = mid + 1;
        else if (arr[mid] < arr[mid - 1])
            e = mid - 1;
    }
    return e;
}

int peakIndexInMountainArray(vector<int> &arr)
{
    return search(arr);
}

int main()
{
    vector<int> arr = {0,10,5,2};
    cout << peakIndexInMountainArray(arr);
}