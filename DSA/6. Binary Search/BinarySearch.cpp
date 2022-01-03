#include <bits/stdc++.h>
using namespace std;

int binary_Search(int arr[], int n, int target)
{
    int start = 0, end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) // TARGET FOUND
            return mid;
        else if (arr[mid] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }
    // TARGET DOESN'T EXIST
    return -1;
}

int main()
{
    int arr[] = {};
    int n = sizeof(arr) / sizeof(int);
    int target;
    int idx = binary_Search(arr, n, target);
    if (idx != -1)
    {
        cout << "Target found at " << idx;
    }
    else
    {
        cout << "Target doesn't exist";
    }

    return 0;
}