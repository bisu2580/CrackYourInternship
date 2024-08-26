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
int maxDepth(TreeNode *root)
{
    if (!root)
        return 0;
    int leftNode = maxDepth(root->left);
    int rightNode = maxDepth(root->right);
    return 1 + max(leftNode, rightNode);
}
int main()
{
}