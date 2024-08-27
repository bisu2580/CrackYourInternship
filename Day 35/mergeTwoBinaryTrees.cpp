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
TreeNode *mergeTrees(TreeNode *root1, TreeNode *root2)
{
    if (!root1)
        return root2;
    if (!root2)
        return root1;
    root1->val += root2->val;
    root1->left = mergeTrees(root1->left, root2->left);
    root1->right = mergeTrees(root1->right, root2->right);
    return root1;
}
int main()
{
}