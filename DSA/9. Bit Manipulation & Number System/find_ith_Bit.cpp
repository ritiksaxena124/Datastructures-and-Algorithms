#include <iostream>
using namespace std;

int ith_Bit(int n, int i)
{
    // bit can be either 0 or 1
    int bit = n & (1 << (i - 1));
    return bit;
}

int main()
{
    int n = 10;
    int i = 2;
    if (ith_Bit(n, i) != 0)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}