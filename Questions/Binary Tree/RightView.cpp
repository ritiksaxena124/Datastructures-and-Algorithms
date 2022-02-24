// PROBLEM LINK: https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1/

/*
class Solution
{
    void view(Node *root, vector<int> &ans, int lvl)
    {
        // base case
        if(root == NULL)
        {
            return;
        }

        if(lvl == ans.size())
        {
            ans.push_back(root->data);
        }

        view(root->right, ans, lvl + 1);
        view(root->left, ans, lvl + 1);
    }
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int> ans;
       // base case
       if(root == NULL)
       {
           return ans;
       }

       view(root, ans, 0);
       return ans;
    }
};
*/