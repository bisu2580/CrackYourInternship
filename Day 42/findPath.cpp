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
void findPath(TreeNode *root, vector<string> &ans, string temp)
{
    if (!root)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        temp += to_string(root->val);
        ans.push_back(temp);
    }
    temp = temp + to_string(root->val) + "->";
    if (root->left)
        findPath(root->left, ans, temp);
    if (root->right)
        findPath(root->right, ans, temp);
}
vector<string> binaryTreePaths(TreeNode *root)
{
    vector<string> ans;
    findPath(root, ans, "");
    return ans;
}
int main()
{
}