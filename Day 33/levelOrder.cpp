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
vector<vector<int>> levelOrder(TreeNode *root)
{
    vector<vector<int>> ans;
    if (!root)
        return ans;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        vector<int> temp;
        int size = q.size();
        while (size--)
        {
            auto fnt = q.front();
            q.pop();
            temp.push_back(fnt->val);
            if (fnt->left)
                q.push(fnt->left);
            if (fnt->right)
                q.push(fnt->right);
        }
        ans.push_back(temp);
    }
    return ans;
}
int main()
{
}