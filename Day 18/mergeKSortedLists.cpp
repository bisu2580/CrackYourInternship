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
        this->next = nullptr;
    }
};
ListNode *sortedMerge(ListNode *head1, ListNode *head2)
{
    if (!head1 && !head2)
        return NULL;
    if (!head1 && head2)
        return head2;
    if (!head2 && head1)
        return head1;

    ListNode *newHead = head1;
    if (head2->val <= head1->val)
    {
        newHead = head2;
        head2 = head2->next;
    }
    else
        head1 = head1->next;
    ListNode *newTail = newHead;
    while (head1 && head2)
    {
        if (head1->val <= head2->val)
        {
            newTail->next = head1;
            newTail = newTail->next;
            head1 = head1->next;
        }
        else
        {
            newTail->next = head2;
            newTail = newTail->next;
            head2 = head2->next;
        }
    }
    if (!head1)
        newTail->next = head2;
    else
        newTail->next = head1;
    return newHead;
}
ListNode *mergeKLists(vector<ListNode *> &lists)
{
    ListNode *temp = NULL;
    for (int i = 0; i < lists.size(); i++)
    {
        temp = sortedMerge(temp, lists[i]);
    }
    return temp;
}
int main()
{
}