/*
PROBLEM STATEMENT: GIVEN A CHAR ARRAY AND A TARGET, WE NEED TO FIND THE NEXT ALPHABETICAL ELEMENT PRESENT IN ARRAY IF EXIST 
ELSE RETURN #
*/
#include <bits/stdc++.h>
using namespace std;

char next_alphabetical_element(vector<char> &arr, char target)
{
    char ans = '#';
    int s = 0, e = arr.size() - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == target)
        {
            s = mid + 1;
        }
        else if (arr[mid] < target)
            s = mid + 1;
        else
        {
            ans = arr[mid];
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<char> arr = {'a', 'b', 'c', 'f', 'h'};
    char target = 'a';
    char ans = next_alphabetical_element(arr, target);
    if (ans == '#')
    {
        cout << "Current Element is the last Element.";
    }
    else
        cout << ans;
}