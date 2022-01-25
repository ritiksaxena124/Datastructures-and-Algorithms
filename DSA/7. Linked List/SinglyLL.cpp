using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        next = nullptr;
    }
    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
} *head = nullptr, *tail = nullptr; // INITIALLY HEAD & TAIL IS POINTING TO NULL

int length()
{
    Node *temp = head;
    int cnt = 0;
    while (temp != nullptr)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

// INSERTION IN SINGLY LINKED LIST

// 1. INSERTION AT STARTING
void insertAtHead(int val)
{
    // CREATE A NEW NODE
    Node *newNode = new Node(val);
    newNode->next = head;
    if (head == nullptr)
    {
        tail = newNode;
    }
    head = newNode;
}

// 2. INSERTIONS AT END
void insertAtEnd(int val)
{
    // CREATE A NEW NODE
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
        insertAtHead(val);
    }
    tail->next = newNode;
    tail = newNode;
}

// 3. INSERT AT POSITION
void insertAtPosition(int pos, int val)
{
    int sz = length();
    // if head is pointing to null this if condition will handle that as well
    if (pos > sz)
    {
        insertAtEnd(val);
        return;
    }
    if (pos == 1)
    {
        insertAtHead(val);
        return;
    }
    Node *temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
}
// DELETION IN SINGLY LINKED LIST

// 1. DELETION FROM START
void deleteAtStart()
{
    if (head == NULL)
        return;
    Node *temp = head;
    head = head->next;
    delete temp;
}

// 2. DELETION FROM end
void deleteAtEnd()
{
    if (head == NULL)
        return;

    if (tail == head)
    {
        head = NULL;
        delete tail;
    }

    Node *temp = head;
    while (temp->next != tail)
        temp = temp->next;
    temp->next = NULL;
    delete tail;
    tail = temp;
}

// 3. DELETE AT POSITION
void deleteAtPosition(int pos)
{
    int sz = length();
    if (pos > sz)
        return;
    if (sz == pos)
    {
        deleteAtEnd();
        return;
    }
    if (pos == 1)
    {
        deleteAtStart();
        return;
    }

    Node *temp = head;
    for(int i = 1; i<pos-1; i++){
        temp = temp->next;
    }
    Node *nodeToBeDeleted = temp->next;
    temp->next = nodeToBeDeleted->next;
    delete nodeToBeDeleted;
}

// PRINT THE SINGLY LINKED LIST
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
