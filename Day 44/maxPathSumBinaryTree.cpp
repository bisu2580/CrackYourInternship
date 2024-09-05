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
int solve(TreeNode *root, int &maxi)
{
    if (!root)
        return 0;
    int leftSum = max(0, solve(root->left, maxi));
    int rightSum = max(0, solve(root->right, maxi));
    maxi = max(maxi, leftSum + rightSum + root->val);
    return max(leftSum, rightSum) + root->val;
}
int maxPathSum(TreeNode *root)
{
    int maxi = INT_MIN;
    solve(root, maxi);
    return maxi;
}
int main()
{
}