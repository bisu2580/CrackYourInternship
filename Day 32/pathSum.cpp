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
bool hasPathSum(TreeNode *root, int targetSum)
{
    if (!root)
        return false;
    stack<TreeNode *> path;
    stack<int> sumPath;
    path.push(root);
    sumPath.push(root->val);
    while (!path.empty())
    {
        auto temp = path.top();
        path.pop();
        int tempVal = sumPath.top();
        sumPath.pop();
        if (!temp->left && !temp->right && targetSum == tempVal)
            return true;
        if (temp->right)
        {
            path.push(temp->right);
            sumPath.push(temp->right->val + tempVal);
        }
        if (temp->left)
        {
            path.push(temp->left);
            sumPath.push(temp->left->val + tempVal);
        }
    }
    return false;
}
int main()
{
}