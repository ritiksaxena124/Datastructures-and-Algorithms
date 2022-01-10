#include <bits/stdc++.h>
using namespace std;

// USING TWO EXTRA ARRAYS
void merge(int *arr, int s, int e, int mid)
{
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int temp1[len1];
    int temp2[len2];
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        temp1[i] = arr[k++];
    }

    k = mid + 1;

    for (int i = 0; i < len2; i++)
    {
        temp2[i] = arr[k++];
    }
    k = s;

    int i = 0, j = 0;
    while (i < len1 && j < len2)
    {
        if (temp1[i] < temp2[j])
        {
            arr[k++] = temp1[i++];
        }
        else
        {
            arr[k++] = temp2[j++];
        }
    }

    while (i < len1)
    {
        arr[k++] = temp1[i++];
    }

    while (j < len2)
    {
        arr[k++] = temp2[j++];
    }
}

void Merge_Sort(int *arr, int s, int e)
{
    if (s >= e)
        return;
    int mid = s + (e - s) / 2;
    Merge_Sort(arr, 0, mid);
    Merge_Sort(arr, mid + 1, e);
    merge(arr, s, e, mid); // USING EXTRA TWO ARRAYS
}

int main()
{
    // int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int arr[] = {3, 2, 1, 5, 6};

    int n = sizeof(arr) / sizeof(int);

    Merge_Sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}