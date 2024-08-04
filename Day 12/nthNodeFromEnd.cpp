#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int data;
    ListNode *next;
    ListNode(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};
int length(ListNode *head)
{
    ListNode *temp = head;
    int count = 0;
    while (temp)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
ListNode *removeNthFromEnd(ListNode *head, int n)
{
    int size = length(head);
    int index = size - n;
    if (index == 0)
        return head->next;
    ListNode *dummy = new ListNode(0);
    dummy->next = head;

    ListNode *temp = head;
    for (int i = 0; i < index - 1; i++)
        temp = temp->next;

    ListNode *newHead = temp->next;
    if (temp->next)
        temp->next = temp->next->next;

    delete newHead;
    return dummy->next;
}
int main()
{
}