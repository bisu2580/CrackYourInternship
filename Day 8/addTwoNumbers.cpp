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
ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    if (l1 && !l2)
        return l1;
    if (l2 && !l1)
        return l2;
    int carry = 0;
    ListNode *temp1 = l1;
    ListNode *temp2 = l2;
    ListNode *newHead = new ListNode(-1);
    ListNode *newTail = newHead;
    while (temp1 && temp2)
    {
        int sum = temp1->val + temp2->val + carry;
        ListNode *digit = new ListNode(sum % 10);
        carry = sum / 10;
        newTail->next = digit;
        newTail = newTail->next;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    while (temp1)
    {
        int sum = temp1->val + carry;
        ListNode *digit = new ListNode(sum % 10);
        carry = sum / 10;
        newTail->next = digit;
        newTail = newTail->next;
        temp1 = temp1->next;
    }
    while (temp2)
    {
        int sum = temp2->val + carry;
        ListNode *digit = new ListNode(sum % 10);
        carry = sum / 10;
        newTail->next = digit;
        newTail = newTail->next;
        temp2 = temp2->next;
    }
    if (carry)
    {
        ListNode *digit = new ListNode(carry);
        newTail->next = digit;
        newTail = newTail->next;
    }
    return newHead->next;
}
int main()
{
}