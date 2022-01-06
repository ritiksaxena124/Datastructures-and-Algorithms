// https://www.codingninjas.com/codestudio/problems/sum-of-max-and-min_1081476?topList=love-babbar-dsa-sheet-problems

#include <bits/stdc++.h>
using namespace std;

int sumOfMaxMin(vector<int> &arr)
{
    int ans = 0;
    int maxi = INT_MIN;
    int mini = INT_MAX;

    for (int i = 0; i < arr.size(); i++)
    {
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
    }
    ans = maxi + mini;
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 4, 5, 6, 6, 6};
    cout << sumOfMaxMin(arr);
}