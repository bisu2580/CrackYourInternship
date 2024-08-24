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
int height(TreeNode *root)
{
    if (!root)
        return 0;
    int left = height(root->left);
    int right = height(root->right);
    int factor = abs(left - right);
    if (factor > 1 || left == -1 || right == -1)
        return -1;
    return 1 + max(left, right);
}
bool isBalanced(TreeNode *root)
{
    if (!root)
        return true;
    return height(root) != -1;
}
int main()
{
}