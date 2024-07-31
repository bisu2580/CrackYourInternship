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
ListNode *reverse(ListNode *head)
{
    ListNode *prev = NULL;
    ListNode *curr = head;
    ListNode *nxt;
    while (curr)
    {
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    return prev;
}
ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *first = reverse(l1);
    ListNode *second = reverse(l2);
    int carry = 0;
    ListNode *newHead = NULL;
    ListNode *newTail = newHead;
    while (first && second)
    {
        int sum = first->val + second->val + carry;
        ListNode *digit = new ListNode(sum % 10);
        carry = sum / 10;
        if (!newHead)
        {
            newHead = digit;
            newTail = newHead;
        }
        else
        {
            newTail->next = digit;
            newTail = newTail->next;
        }
        first = first->next;
        second = second->next;
    }
    while (first)
    {
        int sum = first->val + carry;
        ListNode *digit = new ListNode(sum % 10);
        carry = sum / 10;
        newTail->next = digit;
        newTail = newTail->next;
        first = first->next;
    }
    while (second)
    {
        int sum = second->val + carry;
        ListNode *digit = new ListNode(sum % 10);
        carry = sum / 10;
        newTail->next = digit;
        newTail = newTail->next;
        second = second->next;
    }
    if (carry)
    {
        ListNode *digit = new ListNode(carry);
        newTail->next = digit;
        newTail = newTail->next;
    }
    newHead = reverse(newHead);
    return newHead;
}
int main()
{
}