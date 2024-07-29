#include <bits/stdc++.h>
using namespace std;
void solve(set<vector<int>> &ans, vector<int> &arr, int start, int end)
{
    if (start == end)
    {
        ans.insert(arr);
        return;
    }
    for (int i = start; i <= end; i++)
    {
        swap(arr[start], arr[i]);
        solve(ans, arr, start + 1, end);
        swap(arr[start], arr[i]);
    }
}
vector<vector<int>> uniquePerms(vector<int> &arr, int n)
{
    sort(arr.begin(), arr.end());
    set<vector<int>> temp;
    solve(temp, arr, 0, n - 1);
    vector<vector<int>> ans;
    for (auto i : temp)
    {
        ans.push_back(i);
    }
    return ans;
}
int main()
{
}