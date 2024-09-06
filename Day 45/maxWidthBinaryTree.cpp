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
int widthOfBinaryTree(TreeNode *root)
{
    if (!root)
        return 0;
    long maxi = 0;
    queue<pair<TreeNode *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        int n = q.size();
        long start = q.front().second;
        long end = q.back().second;
        maxi = max(maxi, end - start + 1);
        for (int i = 0; i < n; i++)
        {
            auto p = q.front();
            TreeNode *node = p.first;
            long index = p.second;
            q.pop();
            if (node->left)
                q.push({node->left, 2 * index + 1});
            if (node->right)
                q.push({node->right, 2 * index + 2});
        }
    }
    return maxi;
}
int main()
{
}