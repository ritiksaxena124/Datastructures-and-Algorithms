/*
EXAMPLE TREE:

*/

#include <iostream>
#include <queue>

using namespace std;

// structure of a node
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// creating a binary tree
node *buildTree(node *root)
{
    // cout << "Enter data: ";
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    root = new node(data);
    // cout << "Left child of " << data << endl;
    root->left = buildTree(root);
    // cout << "Right child of " << data << endl;
    root->right = buildTree(root);
    return root;
}

// BINARY TREE TRAVERSALS

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void levelOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        cout << temp->data << " ";
        // check for left child
        if (temp->left)
        {
            q.push(temp->left);
        }
        // check for right child
        if (temp->right)
        {
            q.push(temp->right);
        }
    }
}

int main()
{
    node *root = NULL;
    root = buildTree(root);
    cout << "Inorder" << endl;
    inorder(root);
    cout << endl;
    cout << "Preorder" << endl;
    preorder(root);
    cout << endl;
    cout << "Postorder" << endl;
    postorder(root);
    cout << endl;
    cout << "Level Order" << endl;
    levelOrder(root);
    return 0;
}