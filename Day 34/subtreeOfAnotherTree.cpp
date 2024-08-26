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
bool isSameTree(TreeNode *s, TreeNode *t)
{
    if (!s && !t)
        return true;
    if (!s || !t)
        return false;
    if (s->val != t->val)
        return false;
    return isSameTree(s->left, t->left) && isSameTree(s->right, t->right);
}
bool isSubtree(TreeNode *root, TreeNode *subRoot)
{
    if (!root)
        return false;
    if (isSameTree(root, subRoot))
        return true;
    return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
}
int main()
{
}