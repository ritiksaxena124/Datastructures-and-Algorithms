// PROBLEM LINK: https://practice.geeksforgeeks.org/problems/sum-of-the-longest-bloodline-of-a-tree/1#
/*
class Solution
{
    void solve(Node *root, pair<int, int> sum, pair<int, int> &ans)
    {
        // base case
        if(root == NULL)
        {
            if(sum.second >= ans.second)
            {
                ans.first = max(ans.first, sum.first);
                ans.second = sum.second;
            }
            return;
        }
        sum.first += root->data;
        sum.second += 1;
        solve(root->left, sum, ans);
        solve(root->right, sum, ans);   
    }
public:
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        if(root == NULL) return 0;
        
        pair<int, int> ans;
        ans.first = 0;
        ans.second = 0;
        
        pair<int, int> sum;
        sum.first = 0;
        sum.second = 0;
        
        solve(root, sum, ans);
        
        return ans.first;
    }
};
*/