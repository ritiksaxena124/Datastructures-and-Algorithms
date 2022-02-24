// PROBLEM LINK: https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers/

/*
class Solution {
    int Sum(TreeNode *root, int ans, int sum)
    {
        // base case
        if(root == NULL){
            return 0;
        }
        if(!root->left and !root->right)
        {
            return 2 * sum + root->val;
        }
        sum = 2 * sum + root->val;
        ans = Sum(root->left, ans, sum);
        ans += Sum(root->right, ans, sum);
        return ans;
    }
public:
    int sumRootToLeaf(TreeNode* root) {
        return Sum(root, 0, 0);
    }
};
*/