#include <bits/stdc++.h>
using namespace std;
ListNode *middleNode(ListNode *head)
{
    // Approach 1
    //  int length=0;
    //  ListNode* temp=head;
    //  while(temp){
    //      length++;
    //      temp=temp->next;
    //  }
    //  length/=2;
    //  temp=head;
    //  int index=0;
    //  while(index<length){
    //      temp=temp->next;
    //      index++;
    //  }
    //  return temp;
    // Approach 2
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
int main()
{
}