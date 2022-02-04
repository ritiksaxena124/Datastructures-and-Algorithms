// SEARCH FOR TARGET IN ARRAY USING RECURSION (LINEAR SEARCH)

#include <bits/stdc++.h>
using namespace std;

// SEARCH WHETHER TARGET PRESENT IN ARRAY OR NOT??
bool search(int arr[], int n, int target)
{
    // BASE CONDITION
    if (n == 0)
    {
        if (arr[n] == target) // TARGET IS PRESENT
            return true;
        return false; // TARGET DOES'NT EXIST
    }

    if (arr[n] == target) // TARGET IS PRESENT
        return true;
    return search(arr, n - 1, target);
}

// SEARCH FOR THE INDEX OF TARGET
int findIndex(int arr[], int n, int target)
{
    // BASE CONDITION
    if (n == 0)
    {
        if (arr[n] == target) // TARGET FOUND
            return n;
        return -1; // TARGET NOT PRESENT
    }

    if (arr[n] == target) // TARGET FOUND
        return n;
    return findIndex(arr, n - 1, target);
}

// FIND ALL INDEXES WHERE THE TARGET IS PRESENT
void findIdx(int arr[], int n, int target, vector<int> &idx)
{
    // base condition
    if (n == -1)
    {
        return;
    }

    if (arr[n] == target)
    {
        idx.push_back(n);
    }
    findIdx(arr, n - 1, target, idx);
}

// FIND ALL INDEXES WHERE THE TARGET IS PRESENT WITHOUT PASSING EXTRA VECTOR IN ARGUMENT
vector<int> FindIdx(int arr[], int n, int target)
{
    vector<int> ans;
    // base case
    if (n == -1)
    {
        return ans;
    }

    ans = FindIdx(arr, n - 1, target);
    
    if (arr[n] == target)
    {
        ans.push_back(n);
    }
    
    return ans;
}

int main()
{
    int arr[] = {3, 2, 1, 18, 9, 2, 5, 6, 8, 2};
    int n = sizeof(arr) / sizeof(int);
    int target = 2;
    /*
        if (search(arr, n - 1, target))
            cout << "Target Found at index " << findIndex(arr, n - 1, target);
        else
            cout << "Target does'nt exist";
    */
    /*
        vector<int> idx;
        findIdx(arr, n - 1, target, idx);

        for (auto i : idx)
        {
            cout << i << " ";
        }
    */

    vector<int> ans = FindIdx(arr, n - 1, target);

    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}