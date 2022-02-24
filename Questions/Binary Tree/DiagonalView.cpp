// PROBLEM LINK: https://practice.geeksforgeeks.org/problems/diagonal-traversal-of-binary-tree/1/
/*
vector<int> diagonal(Node *root)
{
   // your code here
   vector<int> ans;

   // base case
   if(root == NULL)
   {
       return ans;
   }

   queue<Node *> q;
   q.push(root);

   while(!q.empty())
   {
       Node *temp = q.front();
       q.pop();
       while(temp)
       {
           ans.push_back(temp->data);
           if(temp->left)
           {
               q.push(temp->left);
           }
           temp = temp->right;
       }
   }
   return ans;
}
*/