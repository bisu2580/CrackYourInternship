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
ListNode *partition(ListNode *head, int x)
{
    ListNode *firstNode = new ListNode(-1);
    ListNode *firstTail = firstNode;
    ListNode *secondNode = new ListNode(-1);
    ListNode *secondTail = secondNode;
    ListNode *temp = head;
    while (temp)
    {
        ListNode *newHead = new ListNode(temp->val);
        if (temp->val < x)
        {
            firstTail->next = newHead;
            firstTail = firstTail->next;
        }
        else
        {
            secondTail->next = newHead;
            secondTail = secondTail->next;
        }
        temp = temp->next;
    }
    secondNode = secondNode->next;
    firstTail->next = secondNode;
    return firstNode->next;
}
int main()
{
}