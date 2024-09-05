#include <bits/stdc++.h>
using namespace std;
int trap(vector<int> &height)
{
    int n = height.size();
    vector<int> lmaximum(n, 0);
    vector<int> rmaximum(n, 0);
    lmaximum[0] = height[0];
    for (int i = 1; i < n; i++)
    {
        int temp = max(height[i], lmaximum[i - 1]);
        lmaximum[i] = temp;
    }
    rmaximum[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        int temp = max(height[i], rmaximum[i + 1]);
        rmaximum[i] = temp;
    }
    int water = 0;
    for (int i = 1; i < n - 1; i++)
    {
        water += min(lmaximum[i], rmaximum[i]) - height[i];
    }
    return water;
}
int main()
{
}