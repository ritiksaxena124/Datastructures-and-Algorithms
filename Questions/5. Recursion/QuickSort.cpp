#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int s, int e)
{
    int pivot = arr[s]; // TAKE STARTING ELEMENT AS PIVOT ELEMENT
    int cnt = 0;
    // COUNT NUMBER OF ELEMENTS SMALLER THAN PIVOT ELEMENT
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < pivot)
            cnt++;
    }

    int pivotIndex = s + cnt; // CORRECT POSITION OF PIVOT ELEMENT
    swap(arr[s], arr[pivotIndex]);

    int i = s, j = e;
    // ELEMENTS ON LEFT SIDE OF PIVOT INDEX ARE SMALLER THAN PIVOT ELEMENT AND ELEMENTS OF RIGHT SIDE OF PIVOT INDEX ARE GREATER THAN PIVOT ELEMENT
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    return pivotIndex;
}

void quick_Sort(vector<int> &arr, int s, int e)
{
    if (s >= e)
        return;
    
    // INDEX OF PIVOT
    int p = partition(arr, s, e);
    
    // HANDLES LEFT SIDE OF PIVOT
    quick_Sort(arr, s, p - 1);

    // HANDLES RIGHT SIDE OF PIVOT
    quick_Sort(arr, p + 1, e);
}

void quickSort(vector<int> &arr)
{
    quick_Sort(arr, 0, arr.size() - 1);
}

int main()
{
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    quickSort(arr);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}