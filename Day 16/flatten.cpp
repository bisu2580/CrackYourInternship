#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *bottom;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->bottom = NULL;
    }
};
Node *sortedMerge(Node *head1, Node *head2)
{
    if (!head1 && head2)
        return head2;
    if (!head2 && head1)
        return head1;

    Node *newList = NULL;
    if (head1->data < head2->data)
    {
        newList = head1;
        head1->bottom = sortedMerge(head1->bottom, head2);
    }
    else
    {
        newList = head2;
        head2->bottom = sortedMerge(head1, head2->bottom);
    }
    return newList;
}
Node *flatten(Node *root)
{
    if (!root)
        return NULL;
    Node *curr = sortedMerge(root, flatten(root->next));
    return curr;
}
int main()
{
}