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
int binarySearch(vector<int> &ans, int target)
{
    int low = 0;
    int high = ans.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (ans[mid] == target)
            return mid;
        else if (ans[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
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
int rangeSumBST(TreeNode *root, int low, int high)
{
    if (!root)
        return 0;
    vector<int> ans;
    inorder(root, ans);
    int lowIndex = binarySearch(ans, low);
    int highIndex = binarySearch(ans, high);
    int sum = 0;
    for (int i = lowIndex; i <= highIndex; i++)
    {
        sum += ans[i];
    }
    return sum;
}
int main()
{
}