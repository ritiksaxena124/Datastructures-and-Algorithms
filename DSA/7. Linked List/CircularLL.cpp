#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        next = NULL;
    }
    Node(int val)
    {
        data = val;
        next = NULL;
    }
} *head = NULL, *tail = NULL;

// LENGTH OF CIRCULAR LINKED LIST
int length()
{
    if (head == NULL)
        return 0;

    Node *temp = head;
    int cnt = 1;
    while (temp->next != head)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

// INSERTION IN CIRCULAR LINKED LIST
// 1. INSERTION AT START
void insertAtStart(int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        tail->next = head;
        return;
    }
    newNode->next = head;
    head = newNode;
    tail->next = head;
}
// 2. INSERTION AT END
void insertAtEnd(int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        insertAtStart(val);
        return;
    }
    newNode->next = head;
    tail->next = newNode;
    tail = newNode;
}
// 3. INSERTION AT POSITION
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

    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= pos - 2; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
// DELETION IN CIRCULAR LINKED LIST
// 1. DELETION FROM START
void deleteAtStart()
{
    // base case
    if (head == NULL)
        return;

    Node *temp = head;
    if (head->next == NULL)
    {
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }
    head = head->next;
    tail->next = head;
    delete temp;
}
// 2. DELETION FROM END
void deleteAtEnd()
{
    // base case
    if (head == NULL)
    {
        return;
    }
    Node *temp = head;
    if (head == tail)
    { // only one element
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }
    while (temp->next != tail)
    {
        temp = temp->next;
    }
    temp->next = head;
    delete tail;
    tail = temp;
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
    for(int i=1;i<=pos-2;i++){
        temp = temp->next;
    }
    Node *nodeToBeDeleted = temp->next;
    temp->next = nodeToBeDeleted->next;
    delete nodeToBeDeleted;
}

// DISPLAY CIRCULAR LINKED LIST
void print()
{
    if (head == NULL)
        return;

    Node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}