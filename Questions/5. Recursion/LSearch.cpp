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

int main()
{
    int arr[] = {3, 2, 1, 18, 9};
    int n = sizeof(arr) / sizeof(int);
    int target = 3;
    if (search(arr, n - 1, target))
        cout << "Target Found at index " << findIndex(arr, n-1, target);
    else
        cout << "Target does'nt exist";
}