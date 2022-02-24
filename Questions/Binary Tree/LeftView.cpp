// PROBLEM LINK: https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1/#
/*
void view(Node *root, vector<int> &ans, int lvl)
{
    // base case
    if(root == NULL){
        return;
    }
    if(lvl == ans.size())
        ans.push_back(root->data);

    view(root->left, ans, lvl+1);
    view(root->right, ans, lvl+1);
}


//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> ans;
   // base case
   if(root == NULL)
   {
       return ans;
   }

   view(root, ans, 0);
   return ans;
}
*/