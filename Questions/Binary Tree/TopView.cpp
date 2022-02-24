// PROBLEM LINK: https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1/
/*
class Solution
{
    public:
    //Function to return a list of nodes visible from the top view
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        vector<int> ans;
        // base case

        if(root == NULL){
            return ans;
        }

        // map <horizonal distance, node>
        map<int, int> topNodes;

        // queue<node, horizontal distance>
        queue<pair<Node*, int> > q;

        q.push(make_pair(root, 0));

        while(!q.empty())
        {
            pair<Node *, int> temp = q.front();
            q.pop();

            Node *node = temp.first;
            int hd = temp.second;

            // check if any entry is present for current horizontal distance in map
            if(topNodes.find(hd) == topNodes.end())
            {
                // no entry is present then insert an entry
                topNodes[hd] = node->data;
            }

            // check for left child
            if(node->left)
            {
                q.push(make_pair(node->left, hd - 1));
            }

            // check for right child
            if(node->right)
            {
                q.push(make_pair(node->right, hd + 1));
            }
        }

        // insert all answer in ans vector from map
        for(auto i : topNodes)
        {
            ans.push_back(i.second);
        }
        return ans;
    }

};
*/