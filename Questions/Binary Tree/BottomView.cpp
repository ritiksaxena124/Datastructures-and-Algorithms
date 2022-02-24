// PROBLEM LINK: https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1/
/*
class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Similar to Top View
        vector<int> ans;
        // base case
        if(root == NULL)
        {
            return ans;
        }

        map<int, int> bottomNodes;

        queue<pair<Node *, int> > q;

        q.push(make_pair(root, 0));

        while(!q.empty())
        {
            pair<Node *, int> temp = q.front();
            q.pop();

            Node *node = temp.first;
            int hd = temp.second;

            // check if entry is present or not conditon is removed else whole code is same
            bottomNodes[hd] = node->data;

            if(node->left)
            {
                q.push(make_pair(node->left, hd - 1));
            }
            if(node->right)
            {
                q.push(make_pair(node->right, hd + 1));
            }
        }

        for(auto i : bottomNodes)
        {
            ans.push_back(i.second);
        }

        return ans;
    }
};
*/