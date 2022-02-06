#include<iostream>
using namespace std;

int power(int base, int p)
{
    // base case
    if(p == 0){
        return 1;
    }
    else if(p == 1){
        return base;
    }

    if(p & 1){
        // power p is odd
        return power(base * base, p / 2) * base;
    }
    // power p is even
    return power(base*base, p/2) ;
}

int main()
{
    cout << power(4, 2);
    return 0;
} 