#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
ListNode *merge(ListNode *head1, ListNode *head2)
{
    ListNode *dummy = new ListNode(0);
    ListNode *tail = dummy;
    while (head1 && head2)
    {
        if (head1->val <= head2->val)
        {
            tail->next = head1;
            head1 = head1->next;
        }
        else
        {
            tail->next = head2;
            head2 = head2->next;
        }
        tail = tail->next;
    }
    while (head1)
    {
        tail->next = head1;
        head1 = head1->next;
        tail = tail->next;
    }
    while (head2)
    {
        tail->next = head2;
        head2 = head2->next;
        tail = tail->next;
    }
    return dummy->next;
}
ListNode *sortList(ListNode *head)
{
    if (!head || !head->next)
        return head;
    ListNode *end = NULL;
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast && fast->next)
    {
        end = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    end->next = NULL;
    ListNode *l1 = sortList(head);
    ListNode *l2 = sortList(slow);
    return merge(l1, l2);
}
int main()
{
}