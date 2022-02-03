#include <iostream>
#include <math.h>
using namespace std;

int rightMostSetBit(int n)
{
    /*
    this solution will take many computations for large numbers
    int pos = 1;
    while(n > 0)
    {
        if((n & 1) == 0){
            n = n >> 1;
            pos++;
        }
        else{
            break;
        }
    }
    */
//    log2(n & -n) => gives the number of 0's after the set bit
    int pos = log2(n & -n) + 1;
    return pos;
}

int main()
{
    int n = 182;
    cout << rightMostSetBit(n);
    return 0;
}