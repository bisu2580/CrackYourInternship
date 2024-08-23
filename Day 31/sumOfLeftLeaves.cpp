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
void solve(TreeNode *root, int &sum, bool isLeft)
{
    if (!root)
        return;
    if (!root->left && !root->right && isLeft)
        sum += root->val;
    solve(root->left, sum, true);
    solve(root->right, sum, false);
}
int sumOfLeftLeaves(TreeNode *root)
{
    if (!root)
        return 0;
    int sum = 0;
    solve(root, sum, false);
    return sum;
}
int main()
{
}