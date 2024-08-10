#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode *deleteDuplicates(ListNode *head)
{
    if (!head || !head->next)
        return head;
    ListNode *dummy = new ListNode(0);
    dummy->next = head;
    ListNode *curr = head;
    ListNode *prev = dummy;

    while (curr != NULL)
    {
        if (curr->next != NULL && curr->val == curr->next->val)
        {
            while (curr->next != NULL && curr->val == curr->next->val)
            {
                curr = curr->next;
            }
            prev->next = curr->next;
        }
        else
        {
            prev = prev->next;
        }
        curr = curr->next;
    }
    return dummy->next;
}
int main()
{
}