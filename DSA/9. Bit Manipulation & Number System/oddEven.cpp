#include <iostream>
using namespace std;

int main()
{
    int num = 11;
    if ((num & 1) == 0)
        cout << "Even";
    else
        cout << "Odd";
}