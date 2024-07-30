#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
int length(ListNode *A)
{
    int count = 0;
    ListNode *temp = A;
    while (temp)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    int length1 = length(headA);
    int length2 = length(headB);
    int diff = abs(length1 - length2);
    ListNode *temp1 = headA;
    ListNode *temp2 = headB;
    if (length1 > length2)
    {
        while (diff--)
            temp1 = temp1->next;
    }
    else if (length2 > length1)
    {
        while (diff--)
            temp2 = temp2->next;
    }
    while (temp1 != temp2)
    {
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return temp1;
}
int main()
{
}