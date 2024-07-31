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
void print(ListNode *head)
{
    while (head != NULL)
    {
        if (head->next != NULL)
            cout << head->val << "->";
        else
            cout << head->val;
        head = head->next;
    }
}
ListNode *sort012(ListNode *head)
{
    ListNode *zeroHead = new ListNode(-1);
    ListNode *zeroTail = zeroHead;
    ListNode *oneHead = new ListNode(-1);
    ListNode *oneTail = oneHead;
    ListNode *twoHead = new ListNode(-1);
    ListNode *twoTail = twoHead;
    while (head != NULL)
    {
        if (head->val == 0)
        {
            zeroTail->next = head;
            zeroTail = head;
        }
        else
        {
            if (head->val == 1)
            {
                oneTail->next = head;
                oneTail = head;
            }
            else
            {
                twoTail->next = head;
                twoTail = head;
            }
        }
        head = head->next;
    }
    zeroTail->next = oneHead->next;
    oneTail->next = twoHead->next;
    twoTail->next = NULL;
    ListNode *temp = zeroHead->next;
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    return temp;
}
int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(0);
    head->next->next->next->next = new ListNode(2);
    head->next->next->next->next->next = new ListNode(0);
    head->next->next->next->next->next->next = new ListNode(1);
    head = sort012(head);
    print(head);
}