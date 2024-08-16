#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node *child;
    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
        child = NULL;
    }
};
Node *flatten(Node *head)
{
    Node *curr = head;
    Node *tail = head;
    stack<Node *> st;
    while (curr)
    {
        if (curr->child)
        {
            Node *child = curr->child;
            if (curr->next)
            {
                st.push(curr->next);
                curr->next->prev = NULL;
            }
            curr->next = child;
            child->prev = curr;
            curr->child = NULL;
        }
        tail = curr;
        curr = curr->next;
    }
    while (!st.empty())
    {
        curr = st.top();
        st.pop();
        tail->next = curr;
        curr->prev = tail;
        while (curr)
        {
            tail = curr;
            curr = curr->next;
        }
    }
    return head;
}
int main()
{
}