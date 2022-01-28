#include <iostream>
using namespace std;

class Queue
{
    int front, rear;
    int size;
    int *arr;

public:
    Queue()
    {
        front = -1;
        rear = -1;
        size = 10;
        arr = new int[size];
    }

    Queue(int sz)
    {
        front = -1;
        rear = -1;
        size = sz;
        arr = new int[size];
    }

    bool isFull();
    bool isEmpty();
    void insert(int val);
    int pop();
    int peek();
};

bool Queue::isFull()
{
    if (rear == size - 1)
        return true;

    return false;
}

bool Queue::isEmpty()
{
    if (rear == -1)
    {
        return true;
    }
    return false;
}

void Queue::insert(int val)
{
    if (isFull())
    {
        cout << "Queue is Full!!\n";
        return;
    }
    if (rear == -1)
    {
        front = 0;
        rear = 0;
        arr[rear] = val;
        return;
    }
    rear++;
    arr[rear] = val;
}

int Queue::pop()
{
    if (isEmpty() or front > rear)
    {
        cout << "Queue is Empty!!\n";
        return -1;
    }

    /*
    int removed = arr[0];
    for (int i = 1; i <= rear; i++)
    {
        arr[i - 1] = arr[i];
    }
    */
    int removed = arr[front];
    front++;
    return removed;
}

int Queue::peek()
{
    if (isEmpty())
    {
        cout << "Queue is Empty!!\n";
        return -1;
    }
    return arr[front];
}