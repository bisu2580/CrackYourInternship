#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
Node *zigZag(Node *head)
{
    if (!head || !head->next)
        return head;
    Node *temp = head;
    bool oddNode = true;

    while (temp->next)
    {
        if (oddNode)
        {
            if (temp->data > temp->next->data)
            {
                int num = temp->data;
                temp->data = temp->next->data;
                temp->next->data = num;
            }
            oddNode = !oddNode;
        }
        else
        {
            if (temp->data < temp->next->data)
            {
                int num = temp->data;
                temp->data = temp->next->data;
                temp->next->data = num;
            }
            oddNode = !oddNode;
        }
        temp = temp->next;
    }
    return head;
}
int main()
{
}