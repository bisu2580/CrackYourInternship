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
void inorder(TreeNode *root, vector<int> &ans)
{
    if (!root)
    {
        return;
    }
    inorder(root->left, ans);
    ans.push_back(root->val);
    inorder(root->right, ans);
}
vector<int> inorderTraversal(TreeNode *root)
{
    vector<int> ans;
    inorder(root, ans);
    return ans;
}
int main()
{
}