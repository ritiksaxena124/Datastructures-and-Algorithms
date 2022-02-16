// Implement Two Stacks in one array

#include <iostream>
using namespace std;

class TwoStack
{
public:
    int top1, top2, size;
    int *arr;

public:
    TwoStack(int s)
    {
        size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }

    void push1(int n)
    {
        // check for overflow
        if ((top2 - top1) > 1)
        {
            // we have a space vacant to push one element
            top1++;
            arr[top1] = n;
            return;
        }
        else
        {
            cout << "Stack Overflow";
        }
    }

    void push2(int n)
    {
        // check for overflow
        if ((top2 - top1) > 1)
        {
            // we have a space vacant to push one element
            top2--;
            arr[top2] = n;
            return;
        }
        else
        {
            cout << "Stack Overflow";
        }
    }

    int pop1()
    {
        // check for stack empty
        if (top1 >= 0)
        {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
        {
            // stack is empty
            return -1;
        }
    }

    int pop2()
    {
        // check for stack empty
        if (top2 < size)
        {
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else
        {
            // stack is empty
            return -1;
        }
    }

    int Top1()
    {

        return top1 >= 0 ? arr[top1] : -1;
    }

    int Top2()
    {

        return top2 < size ? arr[top2] : -1;
    }
};

int main()
{

    TwoStack *st = new TwoStack(10);
    st->push1(10);
    st->push1(20);
    st->push2(20);
    st->push2(10);
    cout << st->Top1() << " " << st->Top2();
    return 0;
}