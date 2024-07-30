#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
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
int getDecimalValue(ListNode *head)
{
    ListNode *reversedList = reverse(head);
    int exp = 0;
    int ans = 0;
    ListNode *temp = reversedList;
    while (temp)
    {
        int number = temp->val;
        ans = ans + (number * pow(2, exp));
        exp++;
        temp = temp->next;
    }
    return ans;
}
int main()
{
}