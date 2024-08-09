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
ListNode *divide(ListNode *head)
{
    if (!head || !head->next)
        return head;
    ListNode *curr = head;
    ListNode *oddStart = NULL;
    ListNode *evenStart = NULL;
    ListNode *oddEnd = oddStart;
    ListNode *evenEnd = evenStart;

    while (curr)
    {
        int number = curr->val;
        if (number & 1)
        {
            if (!oddStart)
            {
                oddStart = curr;
                oddEnd = oddStart;
            }
            else
            {
                oddEnd->next = curr;
                oddEnd = oddEnd->next;
            }
        }
        else
        {
            if (!evenStart)
            {
                evenStart = curr;
                evenEnd = evenStart;
            }
            else
            {
                evenEnd->next = curr;
                evenEnd = evenEnd->next;
            }
        }
        curr = curr->next;
    }

    if (!oddStart)
        return evenStart;
    if (!evenStart)
        return oddStart;

    evenEnd->next = oddStart;
    oddEnd->next = NULL;
    head = evenStart;

    return head;
}
int main()
{
}