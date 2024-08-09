#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &candidates, int target, vector<vector<int>> &ans, vector<int> &temp, int ind)
{
    if (target == 0)
    {
        ans.push_back(temp);
        return;
    }
    for (int i = ind; i < candidates.size(); i++)
    {
        if (i > ind && candidates[i] == candidates[i - 1])
            continue;
        if (target < candidates[i])
            break;
        temp.push_back(candidates[i]);
        solve(candidates, target - candidates[i], ans, temp, i + 1);
        temp.pop_back();
    }
}
vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> ans;
    vector<int> temp;
    int index = 0;
    solve(candidates, target, ans, temp, index);
    return ans;
}
int main()
{
}