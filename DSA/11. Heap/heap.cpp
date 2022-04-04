#include <bits/stdc++.h>
using namespace std;

class heap
{
public:
    int arr[100];
    int sz;

    heap()
    {
        arr[0] = -1;
        sz = 0;
    }

    //   INSERTION IN MAX-HEAP
    void insert(int val)
    {
        sz = sz + 1;
        int index = sz;
        arr[index] = val;
        while (index > 1)
        {
            int parent_idx = index / 2;
            if (arr[parent_idx] < arr[index])
            {
                swap(arr[parent_idx], arr[index]);
                index = parent_idx;
            }
            else
            {
                break;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= sz; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // DELETION IN HEAP
    int deleteInHeap()
    {
        // base case if heap is empty
        if (sz == 0)
            return -1;

        int deleted = arr[1];
        // step 1 Put last value as root value
        arr[1] = arr[sz];
        // step 2 decrement size of heap
        sz--;
        // step 3 Propagate root node to its correct position
        int i = 1;
        while (i < sz)
        {
            int left = 2 * i;
            int right = 2 * i + 1;
            if (left < sz && arr[left] < arr[right])
            {
                swap(arr[i], arr[right]);
                i = right;
            }

            else if (left < sz && arr[left] > arr[right])
            {
                swap(arr[i], arr[left]);
                i = left;
            }
            else
            {
                break;
            }
        }
        return deleted;
    }
};

void heapify(int *arr, int n, int idx)
{
    int largest = idx;
    int leftChild = 2 * idx;
    int rightChild = 2 * idx + 1;
    if (leftChild <= n && arr[largest] < arr[leftChild])
        largest = leftChild;
    if (rightChild <= n && arr[largest] < arr[rightChild])
        largest = rightChild;

    if (largest != idx)
    {
        swap(arr[largest], arr[idx]);
        heapify(arr, n, largest);
    }
}

// HEAP SORT IN MAX HEAP
void heapSort(int *arr, int n)
{
    // assume that the given arr is already max-heap
    int size = n;
    while (size > 1)
    {
        // step 1: swap root element with last element
        swap(arr[1], arr[size]);
        // step 2: decrement the size by 1;
        size--;
        // step 3: Call heapify
        heapify(arr, size, 1);
    }
}

int main()
{

    heap h;
    h.insert(10);
    h.insert(20);
    h.insert(30);
    h.insert(5);
    h.insert(3);
    h.print();

    // cout << h.deleteInHeap() << endl;

    // h.print();

    int arr[] = {-1, 70, 60, 55, 45, 50};
    int n = sizeof(arr) / sizeof(int);
    heapSort(arr, n);
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}