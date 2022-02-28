// PROBLEM LINK: https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1#

/*
class Solution
{
    Node *solve(Node *root, int n1, int n2)
    {
        // base case
        if(root == NULL)
        {
            return NULL;
        }

        if(root->data == n1 or root->data == n2){
            return root;
        }

        Node *leftAns = solve(root->left, n1, n2);
        Node *rightAns = solve(root->right, n1, n2);

        if(!leftAns and !rightAns) return NULL;
        else if (leftAns and rightAns) return root;
        else if(leftAns and !rightAns) return leftAns;
        else if(!leftAns and rightAns) return rightAns;

    }
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here
       // base case
       if(root == NULL)
       {
           return NULL;
       }

       return solve(root, n1, n2);
    }
};
*/