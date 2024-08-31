#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
};
Node *newNode(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
}
Node *solve(int pre[], int preStart, int preEnd, int inorder[], int inStart, int inEnd, map<int, int> mp)
{
    if (preStart > preEnd || inStart > inEnd)
        return NULL;
    Node *root = newNode(pre[preStart]);
    int inRoot = mp[root->data];
    int numsLeft = inRoot - inStart;
    root->left = solve(pre, preStart + 1, preStart + numsLeft, inorder, inStart, inRoot - 1, mp);
    root->right = solve(pre, preStart + numsLeft + 1, preEnd, inorder, inRoot + 1, inEnd, mp);
    return root;
}
Node *Bst(int pre[], int size)
{
    int inorder[size];
    for (int i = 0; i < size; i++)
    {
        inorder[i] = pre[i];
    }
    sort(inorder, inorder + size);
    map<int, int> mp;
    for (int i = 0; i < size; i++)
    {
        mp[inorder[i]] = i;
    }
    return solve(pre, 0, size - 1, inorder, 0, size - 1, mp);
}
int main()
{
}