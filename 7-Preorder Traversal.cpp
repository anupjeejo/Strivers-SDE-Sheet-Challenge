#include <bits/stdc++.h> 
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/

void dfs(vector<int> &result, TreeNode *root)
{
    if(root == NULL) return;

    result.push_back(root->data);
    dfs(result, root->left);
    dfs(result, root->right);
}

vector<int> getPreOrderTraversal(TreeNode *root)
{
    vector<int> result;
    dfs(result, root);
    return result;
}