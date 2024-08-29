#include<bits/stdc++.h>
using namespace std;
void solve(Node *root, vector<Node *> &inorder)
{
    if (!root)
        return;
    solve(root->left, inorder);
    inorder.push_back(root);
    solve(root->right, inorder);
}
void findPreSuc(Node *root, Node *&pre, Node *&suc, int key)
{
    vector<Node *> inorder;
    solve(root, inorder);
    int index;
    for (index = 0; index < inorder.size(); index++)
    {
        if (inorder[index]->key == key)
        {
            if (index > 0)
                pre = inorder[index - 1];
            if (index < inorder.size() - 1)
                suc = inorder[index + 1];
            break;
        }
        else if (inorder[index]->key > key)
        {
            if (index > 0)
                pre = inorder[index - 1];
            suc = inorder[index];
            break;
        }
    }
    if (!pre && index == inorder.size())
        pre = inorder[index - 1];
}
int main(){
}