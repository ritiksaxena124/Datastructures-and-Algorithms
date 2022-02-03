#include <iostream>
using namespace std;

int setBit(int n, int i)
{
    // using bitwise OR property: 0 | 1 -> 1; 1 | 1 -> 1 
    int set = n | 1 << (i-1);
    return set;
}

int main()
{
    int n = 10;
    int i = 1;
    /*
        10 =       1010
    1 << (1-1) = | 0001
               =   1011 => 11   
    */
    cout << setBit(n, i);
}