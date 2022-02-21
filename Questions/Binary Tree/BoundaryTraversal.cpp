/*
Problem Link: https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1/#


class Solution {
    
    void traverseLeft(Node *root, vector<int> &ans)
    {
        // base case
        if((root == NULL) || (root->left == NULL and root->right == NULL)){
            return;
        }
        ans.push_back(root->data);
        if(root->left){
            traverseLeft(root->left, ans);
        }
        else{
            traverseLeft(root->right, ans);
        }
    }
    
     void traverseLeaf(Node *root, vector<int> &ans)
    {
        // base case
        if(root == NULL){
            return;
        }
        
        if(root->left == NULL and root->right == NULL){
            ans.push_back(root->data);
            return;
        }
            
        traverseLeaf(root->left, ans);
        traverseLeaf(root->right, ans);
    }
    
    void traverseRight(Node *root, vector<int> &ans)
    {
        // base case
        if((root == NULL) || (root->left == NULL and root->right == NULL)){
            return;
        }
        if(root->right){
            traverseRight(root->right, ans);
        }
        else{
            traverseRight(root->left, ans);
        }
        
        ans.push_back(root->data);
    }
public:
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int> ans;
        if(root == NULL){
            return ans;
        }
        
        ans.push_back(root->data);
        
        // traverse left boundary nodes
        traverseLeft(root->left, ans);
        
        // traverse leaf Nodes
        traverseLeaf(root->left, ans);
        traverseLeaf(root->right, ans);
        
        // traverse right boundry nodes
        traverseRight(root->right, ans);
        
        // return final answer
        return ans;
    }
};
*/