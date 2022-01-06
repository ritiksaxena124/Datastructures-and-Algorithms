// https://www.codingninjas.com/codestudio/problems/reverse-the-array_1262298?topList=love-babbar-dsa-sheet-problems
/*
Given an array/list 'ARR' of integers and a position ‘M’. You have to reverse the array after that position.
*/
#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int>& arr, int s, int e)
{
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void reverseArray(vector<int>& arr, int m)
{
    // Write your code here.
    reverse(arr, m + 1, arr.size() - 1);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int m = 2;
    reverseArray(arr, m);

    for (auto i : arr)
    {
        cout << i << " ";
    }
}