#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        val = val;
        left = NULL;
        right = NULL;
    }
};
TreeNode *solve(TreeNode *root, TreeNode *p, TreeNode *q)
{
    if (!root || root == p || root == q)
        return root;
    TreeNode *leftNode = solve(root->left, p, q);
    TreeNode *rightNode = solve(root->right, p, q);
    if (!leftNode)
        return rightNode;
    else if (!rightNode)
        return leftNode;
    return root;
}
TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
{
    return solve(root, p, q);
}
int main()
{
}