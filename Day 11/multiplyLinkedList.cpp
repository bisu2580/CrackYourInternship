#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};
long long multiplyTwoLists(Node *first, Node *second)
{
    long long num1 = 0, num2 = 0;
    long long mod = 1000000007;
    Node *temp1 = first;
    Node *temp2 = second;
    while (temp1)
    {
        num1 = (num1 * 10) % mod + (temp1->data) % mod;
        temp1 = temp1->next;
    }
    while (temp2)
    {
        num2 = (num2 * 10) % mod + (temp2->data) % mod;
        temp2 = temp2->next;
    }
    long long ans = (num1 * num2) % mod;
    return ans % mod;
}
int main()
{
}