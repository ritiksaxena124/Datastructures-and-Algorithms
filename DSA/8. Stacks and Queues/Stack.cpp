#include <iostream>
using namespace std;

class Stack
{
    // DATA MEMBERS
    int size; // defines the size of Stack
    int top;  // points to the last element index (if presents)
    int *arr; // Stack

public:
    Stack()
    {
        size = 10;
        top = -1;
        arr = new int[size];
    }
    Stack(int sz)
    {
        size = sz;
        top = -1;
        arr = new int[size];
    }
    // MEMBER FUNCTIONS
    bool isFull();
    bool isEmpty();
    void push(int val);
    int pop();
    int peek();
};

bool Stack::isFull()
{
    if (top == size - 1)
        return true;
    return false;
}

bool Stack::isEmpty()
{
    if (top == -1)
        return true;
    return false;
}
void Stack::push(int val)
{
    if (isFull())
    {
        cout << "Stack overflow!!\n";
        return;
    }

    top++;
    arr[top] = val;
}

int Stack::pop()
{
    if (isEmpty())
    {
        cout << "Stack underflow!!\n";
        return -1;
    }
    int element = arr[top];
    top--;
    return element;
}

int Stack::peek()
{
    if (isEmpty())
    {
        cout << "Stack is Empty!!\n";
        return -1;
    }
    return arr[top];
}