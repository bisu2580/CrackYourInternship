#include <bits/stdc++.h>
using namespace std;
Node *connect(Node *root)
{
    if (!root)
        return NULL;
    Node *curr = root;
    while (curr->left)
    {
        Node *temp = curr;
        while (curr)
        {
            curr->left->next = curr->right;
            curr->right->next = (curr->next == NULL) ? NULL : curr->next->left;
            curr = curr->next;
        }
        curr = temp->left;
    }
    return root;
}
int main()
{
}