// Find the Power of a ^ b

#include <iostream>
using namespace std;

int Power(int base, int power)
{
    if (power == 0)
        return 1;
    else if (power == 1)
        return base;
    int ans = 1;
    while (power > 0)
    {
        if ((power & 1) != 0)
        {
            ans = ans * base;
        }
        base = base * base;
        power = power >> 1;
    }
    return ans;
}

int main()
{
    int base = 2;
    int power = 5;
    cout << Power(base, power);
}