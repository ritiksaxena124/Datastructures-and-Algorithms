// PROBLEM LINK: https://practice.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1
/*
class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        //Your code here
        vector<int> ans;
        // base case
        if(root == NULL){
            return ans;
        }

        // map<horizontal distance, map<level, list of nodes>>
        map<int, map<int, vector<int> > > nodes;
        queue<pair<Node*, pair<int, int> > > q;


        q.push(make_pair(root, make_pair(0, 0)));

        while(!q.empty())
        {
            pair<Node *, pair<int, int> > temp = q.front();
            q.pop();

            Node *node = temp.first;
            int hd = temp.second.first;
            int lvl = temp.second.second;

            nodes[hd][lvl].push_back(node->data);

            if(node->left){
                q.push(make_pair(node->left, make_pair(hd - 1, lvl + 1)));
            }

            if(node->right){
                q.push(make_pair(node->right, make_pair(hd + 1, lvl + 1)));
            }
        }

        for(auto i : nodes)
        {
            for(auto j : i.second)
            {
                for(auto k : j.second)
                {
                    ans.push_back(k);
                }
            }
        }
        return ans;
    }
};
*/