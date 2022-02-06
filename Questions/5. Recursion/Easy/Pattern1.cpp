/*
given -> n = 5
print using Recursion:

*****
****
***
**
*

*/
#include <iostream>
using namespace std;

void pattern(int r, int c)
{
    // base case
    if (r == 0)
    {
        return;
    }

    if (c == r)
    {
        // next row
        c = 0;
        cout << endl;
        pattern(r - 1, c);
    }
    else
    {
        // same row
        cout << "*";
        pattern(r, ++c);
    }
}

int main()
{
    pattern(5, 0);
    return 0;
}