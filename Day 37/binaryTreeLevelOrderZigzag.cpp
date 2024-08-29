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
vector<vector<int>> zigzagLevelOrder(TreeNode *root)
{
    vector<vector<int>> ans;
    if (!root)
        return ans;
    bool isOdd = true;
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
        if (!isOdd)
            reverse(temp.begin(), temp.end());
        isOdd = !isOdd;
        ans.push_back(temp);
        temp.clear();
    }
    return ans;
}
int main()
{
}