#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *random;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->random = NULL;
    }
};
Node *copyRandomList(Node *head)
{
    if (!head)
        return NULL;
    Node *curr = head;
    while (curr)
    {
        Node *newNode = new Node(curr->val);
        newNode->next = curr->next;
        curr->next = newNode;
        curr = newNode->next;
    }
    curr = head;
    while (curr)
    {
        if (curr->random)
        {
            curr->next->random = curr->random->next;
        }
        curr = curr->next->next;
    }
    curr = head;
    Node *newHead = head->next;
    Node *newCurr = newHead;
    while (curr)
    {
        curr->next = newCurr->next;
        curr = curr->next;
        if (curr)
        {
            newCurr->next = curr->next;
            newCurr = newCurr->next;
        }
    }
    return newHead;
}
int main()
{
}