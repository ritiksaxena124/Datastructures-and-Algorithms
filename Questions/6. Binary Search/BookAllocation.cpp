// https://www.codingninjas.com/codestudio/problems/allocate-books_1090540?leftPanelTab=0

#include <iostream>
using namespace std;

bool isPossible(int arr[], int books, int student, int maxAlloc)
{
    int cnt = 1, pages = 0;
    for(int i = 0;i < books; i++){
        if((pages + arr[i]) <= maxAlloc){
            pages += arr[i];
        }else{
            cnt++;
            if(cnt > student || arr[i] > maxAlloc){
                return false;
            }
            pages = arr[i];
        }
    }
    return true;
}

int allocateBooks(int arr[], int n, int m)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int s = 0, e = sum;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int pages[] = {10, 20, 30, 40};
    int students = 2;
    int n = sizeof(pages)/sizeof(int);
    cout << allocateBooks(pages, n, students);
    return 0;
}