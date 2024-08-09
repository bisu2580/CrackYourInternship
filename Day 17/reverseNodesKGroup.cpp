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
int length(ListNode *head)
{
    int count = 0;
    while (head)
    {
        count++;
        head = head->next;
    }
    return count;
}
ListNode *reverseKGroup(ListNode *head, int k)
{
    ListNode *temp = head;
    int len = length(head);
    if (k > len)
        return head;
    len = 0;

    ListNode *prev = NULL;
    ListNode *curr = head;
    ListNode *nxt;
    while (len < k)
    {
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
        len++;
    }
    head->next = reverseKGroup(nxt, k);
    return prev;
}
int main()
{
}