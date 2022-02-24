// Problem Link: https://practice.geeksforgeeks.org/problems/zigzag-tree-traversal/1/#
/*
class Node
{
public:
    int data;
    Node *left, *right;
};

class Solution: public Node
{
public:
    // Function to store the zig zag order traversal of tree in a list.
    vector<int> zigZagTraversal(Node *root)
    {
        // Code here
        vector<int> ans;
        // base case
        if (root == NULL)
        {
            return ans;
        }
        queue<Node *> q;
        q.push(root);
        bool flag = true;

        while (!q.empty())
        {
            int sz = q.size();
            vector<int> temp(sz);

            for (int i = 0; i < sz; i++)
            {
                Node *node = q.front();
                q.pop();
                int idx = flag ? i : sz - i - 1;
                temp[idx] = node->data;

                // check for left child
                if (node->left)
                {
                    q.push(node->left);
                }
                // check for right child
                if (node->right)
                {
                    q.push(node->right);
                }
            }

            flag = !flag;
            for (auto i : temp)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
*/