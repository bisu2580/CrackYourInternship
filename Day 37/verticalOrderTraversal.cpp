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
vector<vector<int>> verticalTraversal(TreeNode *root)
{
    vector<vector<int>> ans;
    map<int, map<int, multiset<int>>> mp;
    queue<pair<TreeNode *, pair<int, int>>> q;
    q.push({root, {0, 0}});
    while (!q.empty())
    {
        auto fnt = q.front();
        q.pop();
        TreeNode *node = fnt.first;
        int x = fnt.second.first;
        int y = fnt.second.second;
        mp[x][y].insert(node->val);
        if (node->left)
            q.push({node->left, {x - 1, y + 1}});
        if (node->right)
            q.push({node->right, {x + 1, y + 1}});
    }
    for (auto p : mp)
    {
        vector<int> col;
        for (auto q : p.second)
        {
            col.insert(col.end(), q.second.begin(), q.second.end());
        }
        ans.push_back(col);
    }
    return ans;
}
int main()
{
}