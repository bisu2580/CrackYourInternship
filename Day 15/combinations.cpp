#include <bits/stdc++.h>
using namespace std;
void combination(int n, int k, vector<int> &temp, vector<vector<int>> &ans, int index)
{
    if (temp.size() == k)
    {
        ans.push_back(temp);
        return;
    }
    for (int i = index; i <= n; i++)
    {
        temp.push_back(i);
        combination(n, k, temp, ans, i + 1);
        temp.pop_back();
    }
}
vector<vector<int>> combine(int n, int k)
{
    vector<int> temp;
    vector<vector<int>> ans;
    combination(n, k, temp, ans, 1);
    return ans;
}
int main()
{
}