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
bool solve(TreeNode *root, long long lower, long long upper)
{
    if (!root)
        return true;
    if (root->val <= lower || root->val >= upper)
        return false;
    return solve(root->left, lower, root->val) && solve(root->right, root->val, upper);
}
bool isValidBST(TreeNode *root)
{
    long long int lower = -4294967296;
    long long int upper = 4294967296;
    return solve(root, lower, upper);
}
int main()
{
}