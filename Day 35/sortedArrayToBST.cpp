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
TreeNode *solve(vector<int> ans, int start, int end)
{
    if (start > end)
        return NULL;
    int mid = start + (end - start) / 2;
    TreeNode *root = new TreeNode(ans[mid]);
    root->left = solve(ans, start, mid - 1);
    root->right = solve(ans, mid + 1, end);
    return root;
}
TreeNode *sortedArrayToBST(vector<int> &nums)
{
    int start = 0;
    int end = nums.size() - 1;
    return solve(nums, start, end);
}
int main()
{
}