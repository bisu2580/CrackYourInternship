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
ListNode *removeElements(ListNode *head, int val)
{
    ListNode *curr = head;
    ListNode *newHead = new ListNode(0);
    ListNode *newTail = newHead;
    while (curr)
    {
        if (curr->val != val)
        {
            ListNode *newNode = new ListNode(curr->val);
            newTail->next = newNode;
            newTail = newTail->next;
        }
        curr = curr->next;
    }
    return newHead->next;
    // Approach 2
    /* ListNode* curr=head;
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode *prev = dummy;
        while (curr) {
            if (curr->val == val) {
                prev->next = curr->next;
            } else {
                prev = curr;
            }
            curr = curr->next;
        }
        return dummy->next; */
}
int main()
{
}