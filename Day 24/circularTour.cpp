#include <bits/stdc++.h>
using namespace std;
int tour(petrolPump p[], int n)
{
    int balance = 0;
    int front = 0;
    int deficit = 0;
    for (int i = 0; i < n; i++)
    {
        balance = balance + p[i].petrol - p[i].distance;
        if (balance < 0)
        {
            deficit += balance;
            front = i + 1;
            balance = 0;
        }
    }
    if (deficit + balance >= 0)
        return front;
    return -1;
}
int main()
{
}