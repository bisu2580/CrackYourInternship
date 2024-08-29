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
void inorderSolve(Node *root, vector<int> &ans)
{
    if (!root)
        return;
    inorderSolve(root->left, ans);
    ans.push_back(root->data);
    inorderSolve(root->right, ans);
}
Node *bToDLL(Node *root)
{
    Node *head = new Node(-1);
    Node *tail = head;
    vector<int> ans;
    inorderSolve(root, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        Node *temp = new Node(ans[i]);
        tail->right = temp;
        temp->left = tail;
        tail = tail->right;
    }
    Node *res = head->right;
    res->left = NULL;
    return res;
}
int main()
{
}