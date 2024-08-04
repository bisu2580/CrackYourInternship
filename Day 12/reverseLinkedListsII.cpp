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
ListNode *reverseBetween(ListNode *head, int left, int right)
{
    if (!head || left == right)
        return head;
    ListNode *dummy = new ListNode(0);
    dummy->next = head;

    ListNode *leftPre = dummy;
    ListNode *curr = head;

    for (int i = 1; i < left; i++)
    {
        leftPre = leftPre->next;
        curr = curr->next;
    }
    ListNode *subListHead = curr;

    ListNode *prev = NULL;
    for (int i = 0; i <= right - left; i++)
    {
        ListNode *nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    leftPre->next = prev;
    subListHead->next = curr;

    return dummy->next;
}
int main()
{
}