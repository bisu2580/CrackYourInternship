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
bool isPalindrome(ListNode *head)
{
    if (head->next == NULL)
        return true;
    ListNode *slow = head;
    ListNode *fast = head->next;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    ListNode *leftTail = slow;
    if (!leftTail->next)
        return false;
    ListNode *rightHead = leftTail->next;
    leftTail->next = NULL;

    rightHead = reverse(rightHead);
    ListNode *list1 = head;
    ListNode *list2 = rightHead;
    while (list1 && list2)
    {
        if (list1->val != list2->val)
            return false;
        list1 = list1->next;
        list2 = list2->next;
    }
    return true;
}
int main()
{
}