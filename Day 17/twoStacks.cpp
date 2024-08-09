#include <bits/stdc++.h>
using namespace std;
class twoStacks
{
public:
    int arr[100];
    int top1, top2, mid;
    int size;
    twoStacks()
    {
        top1 = -1;
        size = 100;
        top2 = size;
        mid = size / 2;
    }

    // Function to push an integer into the stack1.
    void push1(int x)
    {
        top1++;
        arr[top1] = x;
    }

    // Function to push an integer into the stack2.
    void push2(int x)
    {
        top2--;
        arr[top2] = x;
    }

    // Function to remove an element from top of the stack1.
    int pop1()
    {
        if (top1 == -1)
            return -1;
        int temp = arr[top1--];
        return temp;
    }

    // Function to remove an element from top of the stack2.
    int pop2()
    {
        if (top2 == size)
            return -1;
        int temp = arr[top2++];
        return temp;
    }
};
int main()
{
}