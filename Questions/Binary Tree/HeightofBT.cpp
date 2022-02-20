/*
int solve(struct Node *node)
{
    if (node == NULL)
        return 0;
    int lcnt = solve(node->left); // number of nodes in left subtree
    int rcnt = solve(node->right); // number of nodes in right subtree
    return max(lcnt, rcnt) + 1;
}*/