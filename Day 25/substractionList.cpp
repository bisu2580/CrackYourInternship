#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
int length(Node *head)
{
    int count = 0;
    while (head)
    {
        count++;
        head = head->next;
    }
    return count;
}
Node *reverse(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *nxt;
    while (curr)
    {
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    return prev;
}
Node *subLinkedList(Node *head1, Node *head2)
{
    while (head1 && head1->data == 0)
        head1 = head1->next;
    while (head2 && head2->data == 0)
        head2 = head2->next;

    int len1 = length(head1);
    int len2 = length(head2);

    if (len1 == 0 && len2 == 0)
        return new Node(0);

    if (len2 > len1)
    {
        Node *temp = head1;
        head1 = head2;
        head2 = temp;
    }

    if (len1 == len2)
    {
        Node *curr1 = head1;
        Node *curr2 = head2;
        while (curr1->data == curr2->data)
        {
            curr1 = curr1->next;
            curr2 = curr2->next;
            if (curr1 == NULL)
                return new Node(0);
        }

        if (curr2->data > curr1->data)
        {
            Node *temp = head1;
            head1 = head2;
            head2 = temp;
        }
    }
    head1 = reverse(head1);
    head2 = reverse(head2);

    Node *ans = NULL;
    while (head1)
    {
        int n1 = head1->data;
        int n2 = 0;
        if (head2)
            n2 = head2->data;
        if (n1 < n2)
        {
            if (head1->next)
                head1->next->data -= 1;
            n1 += 10;
        }

        Node *curr = new Node(n1 - n2);
        curr->next = ans;
        ans = curr;

        head1 = head1->next;
        if (head2)
            head2 = head2->next;
    }
    while (ans && ans->next)
    {
        if (ans->data == 0)
            ans = ans->next;
        else
            break;
    }
    return ans;
}
int main()
{
}