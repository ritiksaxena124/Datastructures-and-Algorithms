#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node()
    {
        next = nullptr;
        prev = nullptr;
    }

    Node(int val)
    {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
} *head = nullptr, *tail = nullptr;

// LENGTH OF DOUBLY LINKED LIST
int length()
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

// INSERTIONS IN DOUBLY LINKED LIST

// 1. INSERT AT START
void insertAtStart(int val)
{
    Node *newNode = new Node(val);

    // base case
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

// 2. INSERT AT End
void insertAtEnd(int val)
{
    Node *newNode = new Node(val);

    // base case
    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

// 3. INSERT AT POSITION
void insertAtPosition(int pos, int val)
{
    if (pos == 1)
    {
        insertAtStart(val);
        return;
    }

    int sz = length();
    if (pos > sz)
    {
        insertAtEnd(val);
        return;
    }

    Node *temp = head;
    for (int i = 1; i <= pos - 2; i++)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(val);
    newNode->next = temp->next;
    temp->next->prev = newNode;
    newNode->prev = temp;
    temp->next = newNode;
}

// DELETION IN DOUBLY LINKED LIST
// 1. DELETION FROM START
void deleteAtStart()
{
    // base case
    if (head == NULL)
    {
        return;
    }
    Node *temp = head;
    if (head->next == NULL)
    {
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }
    head = head->next;
    delete temp;
}

// 2. DELETION FROM END
void deleteAtEnd()
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        deleteAtStart();
        return;
    }

    Node *temp = tail;
    tail = tail->prev;
    tail->next = NULL;
    delete temp;
}

// 3. DELETION FROM POSITION
void deleteAtPosition(int pos)
{
    if (pos == 1)
    {
        deleteAtStart();
        return;
    }
    int sz = length();
    if (pos > sz)
    {
        return;
    }
    if (pos == sz)
    {
        deleteAtEnd();
        return;
    }
    Node *temp = head;
    for (int i = 1; i <= pos - 2; i++)
    {
        temp = temp->next;
    }
    Node *nodeToBeDelete = temp->next;
    temp->next = nodeToBeDelete->next;
    nodeToBeDelete->next->prev = temp;
    delete nodeToBeDelete;
}
// DISPLAY DOUBLY LINKED LIST
void print()
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}