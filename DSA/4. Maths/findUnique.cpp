#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 4, 1, 2, 1, 3, 4, 6};
    int n = sizeof(arr) / sizeof(int);

    int ans = 0;
    // Iterate over the array
   for(int i : arr)
   {
       ans = ans ^ i;
   }

    cout << ans;
    return 0;
}