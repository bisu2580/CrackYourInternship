#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
TreeNode *invertTree(TreeNode *root)
{
    // Approach 1
    if (!root)
        return NULL;
    // TreeNode* leftNode=invertTree(root->left);
    // TreeNode* rightNode=invertTree(root->right);
    // root->left=rightNode;
    // root->right=leftNode;
    // return root;
    // Approach 2
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        TreeNode *node = q.front();
        q.pop();
        TreeNode *temp = node->left;
        node->left = node->right;
        node->right = temp;
        if (node->left)
            q.push(node->left);
        if (node->right)
            q.push(node->right);
    }
    return root;
}
int main()
{
}