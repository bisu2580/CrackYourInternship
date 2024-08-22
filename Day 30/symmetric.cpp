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
bool symmetricCheck(TreeNode *left, TreeNode *right)
{
    if (!left || !right)
        return left == right;
    if (left->val != right->val)
        return false;
    bool leftSymm = symmetricCheck(left->left, right->right);
    bool rightSymm = symmetricCheck(left->right, right->left);
    return leftSymm && rightSymm;
}
bool isSymmetric(TreeNode *root)
{
    return !root || symmetricCheck(root->left, root->right);
}
int main()
{
}