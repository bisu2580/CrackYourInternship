#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void inorder(struct Node *root, vector<int> &ans)
{
    if (!root)
        return;
    inorder(root->left, ans);
    ans.push_back(root->data);
    inorder(root->right, ans);
}
float findMedian(struct Node *root)
{
    vector<int> ans;
    inorder(root, ans);
    int size = ans.size();
    // odd
    if (size == 0)
        return 0.0;
    if (size & 1)
    {
        int number = size / 2;
        return ans[number];
    }
    int x = size / 2;
    int y = x - 1;
    return (ans[x] + ans[y]) / 2.0;
}
int main()
{
}