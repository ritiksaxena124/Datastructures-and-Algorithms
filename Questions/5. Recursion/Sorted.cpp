#include <bits/stdc++.h>
using namespace std;

bool sorted(int arr[], int sz)
{
    // BASE CONDITION
    if (sz == 0)
        return true;

    if (arr[sz] >= arr[sz - 1])
        return sorted(arr, sz - 1);
    return false;
}

int main()
{
    int arr[] = {2, 1};
    int n = sizeof(arr) / sizeof(int);

    if (sorted(arr, n - 1))
        cout << "Sorted";
    else
        cout << "Un-Sorted";
}