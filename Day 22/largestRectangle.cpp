#include <bits/stdc++.h>
using namespace std;
vector<int> prevSmallerIndex(vector<int> height)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(height.size());
    for (int i = 0; i < height.size(); i++)
    {
        int h = height[i];
        while (s.top() != -1 && height[s.top()] >= h)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}
vector<int> nextSmallerIndex(vector<int> height)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(height.size());
    for (int i = height.size() - 1; i >= 0; i--)
    {
        int h = height[i];
        while (s.top() != -1 && height[s.top()] >= h)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}
int largestRectangleArea(vector<int> &heights)
{
    vector<int> prev = prevSmallerIndex(heights);
    vector<int> next = nextSmallerIndex(heights);
    int maxi = INT_MIN;
    for (int i = 0; i < heights.size(); i++)
    {
        if (next[i] == -1)
            next[i] = heights.size();
        int length = heights[i];
        int breadth = next[i] - prev[i] - 1;
        maxi = max(maxi, length * breadth);
    }
    return maxi;
}
int main()
{
}