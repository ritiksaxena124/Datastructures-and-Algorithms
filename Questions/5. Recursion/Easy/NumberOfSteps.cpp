// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/

#include<bits/stdc++.h>
using namespace std;

int helper(int num, int steps)
{
    // BASE CONDITION
    if(num == 0) return steps;
    
    if(num & 1) 
    {
        // NUMBER IS ODD
        num = num - 1;
    }
    else 
    {
        // NUMBER IS EVEN
        num = num / 2;
    }
    return helper(num, ++steps);
}

int numberOfSteps(int num) {
    return helper(num, 0);        
}
int main()
{
    int n = 8;
    cout << numberOfSteps(n);
}