#include <bits/stdc++.h>
using namespace std;
Node *compute(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    while (curr)
    {
        Node *temp = curr->next;
        while (temp && curr->data >= temp->data)
        {
            temp = temp->next;
        }
        if (!temp)
        {
            prev = curr;
            curr = curr->next;
        }
        else if (temp && curr == head)
        {
            curr = curr->next;
            head = curr;
        }
        else if (temp && curr != head)
        {
            prev->next = curr->next;
            curr = prev->next;
        }
    }
    return head;
}
int main()
{
}