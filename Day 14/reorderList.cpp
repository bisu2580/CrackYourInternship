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
void reorderList(ListNode *head)
{
    if (!head || !head->next)
        return;
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    ListNode *newHead = slow->next;
    slow->next = NULL;
    newHead = reverse(newHead);

    ListNode *curr = head;
    ListNode *newTail = newHead;

    ListNode *h1nxt;
    ListNode *h2nxt;
    while (curr && newTail)
    {
        h1nxt = curr->next;
        h2nxt = newTail->next;
        curr->next = newTail;
        newTail->next = h1nxt;
        curr = h1nxt;
        newTail = h2nxt;
    }
}
int main()
{
}