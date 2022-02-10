// https://www.codingninjas.com/codestudio/problems/next-smaller-element_1112581?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0

#include <iostream>
#include <stack>

using namespace std;

void nextSmaller(int arr[], int n)
{
    stack<int> st;
    st.push(-1);
    int temp[n];
    for (int i = n - 1; i >= 0; i--)
    {
        while (st.top() >= arr[i])
        {
            st.pop();
        }
        temp[i] = st.top();
        st.push(arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
}
int main()
{
    int arr[] = {2, 1, 4, 3};
    int n = sizeof(arr) / sizeof(int);
    nextSmaller(arr, n);
    return 0;
}