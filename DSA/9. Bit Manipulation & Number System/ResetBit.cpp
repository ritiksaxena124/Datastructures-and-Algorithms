#include <iostream>
using namespace std;

int resetBit(int n, int i)
{
    /*
        ~ -> complement => converts 0 -> 1 and 1 -> 0
        n = 10 => 1010
        i = 2

        1010
      & 0010 <= (1 << (i-1))

        1010
      & 1101 <= ~(1<<(i-1))
    Ans:1000 => 8
    */
   
    int reset = n & ~(1 << (i-1));
    return reset;
}

int main()
{
    int n = 10;
    int i = 2;
    cout << resetBit(n, i);
    return 0;
}