// Find the Number of digits in base b representation of a number n

#include <iostream>
#include <cmath>
using namespace std;

void digits(int n, int b)
{
    int ans = (log(n) / log(b)) + 1;
    cout << ans << endl;
}

int main()
{
    int n = 5;
    int b = 2;
    digits(n, b);
    return 0;
}