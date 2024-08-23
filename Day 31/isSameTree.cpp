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
bool isSameTree(TreeNode *p, TreeNode *q)
{
    if (!p && !q)
        return true;
    if (!p || !q)
        return false;
    bool isSame = (p->val == q->val);
    bool leftNode = isSameTree(p->left, q->left);
    bool rightNode = isSameTree(p->right, q->right);
    return isSame && leftNode && rightNode;
}
int main()
{
}