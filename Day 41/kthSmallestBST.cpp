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
int kthSmallest(TreeNode *root, int &k)
{
    if (root == NULL)
        return -1;

    int leftSide = kthSmallest(root->left, k);
    if (leftSide != -1)
        return leftSide;
    k--;
    if (k == 0)
        return root->val;
    int rightSide = kthSmallest(root->right, k);
    return rightSide;
}
int main()
{
}