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
vector<int> rightSideView(TreeNode *root)
{
    vector<int> ans;
    if (!root)
        return ans;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        vector<int> temp;
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
        reverse(temp.begin(), temp.end());
        ans.push_back(temp[0]);
        temp.clear();
    }
    return ans;
}
int main()
{
}