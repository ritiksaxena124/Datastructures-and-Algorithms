// BUBBLE SORT USING RECURSION

#include<iostream>
using namespace std;

void bubbleSort(int *arr, int r, int c)
{
    // base case
    if(r == 0){
        return;
    }
    
    if((c < r) and (arr[c] < arr[c-1]) ){
        swap(arr[c], arr[c-1]);
        bubbleSort(arr, r, c+1);
    }
    // HERE ROW = COLUMN
    bubbleSort(arr, r-1, 1);
}
 

int main()
{

    int arr[] = {5, 4, 3, 2, 1};
    int r = 5;
    int c = 1;
    bubbleSort(arr, r, c);
    for(auto i : arr){
        cout << i << " ";
    }
    return 0;
}