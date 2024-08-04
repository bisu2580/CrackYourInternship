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
ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    if (!list1 && !list2)
        return NULL;
    if (list1 && !list2)
        return list1;
    if (list2 && !list1)
        return list2;
    ListNode *newHead = list1;
    if (list1->val > list2->val)
    {
        newHead = list2;
        list2 = list2->next;
    }
    else
        list1 = list1->next;
    ListNode *newTail = newHead;

    while (list1 && list2)
    {
        if (list1->val < list2->val)
        {
            newTail->next = list1;
            list1 = list1->next;
        }
        else
        {
            newTail->next = list2;
            list2 = list2->next;
        }
        newTail = newTail->next;
    }

    if (!list1)
        newTail->next = list2;
    else
        newTail->next = list1;
    return newHead;
}
int main()
{
}