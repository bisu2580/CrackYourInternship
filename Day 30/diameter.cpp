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
int getHeight(TreeNode *root)
{
    if (!root)
        return 0;
    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);
    int ans = max(leftHeight, rightHeight) + 1;
    return ans;
}
int diameterOfBinaryTree(TreeNode *root)
{
    if (!root)
        return 0;
    int leftDiameter = diameterOfBinaryTree(root->left);
    int rightDiameter = diameterOfBinaryTree(root->right);
    int passThroughRoot = getHeight(root->left) + getHeight(root->right);

    return max(leftDiameter, max(rightDiameter, passThroughRoot));
}
int main()
{
}