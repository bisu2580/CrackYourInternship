#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &nums, vector<vector<int>> &ans, int index)
{
    if (index == nums.size())
    {
        ans.push_back(nums);
        return;
    }
    unordered_map<int, bool> visited;
    for (int i = index; i < nums.size(); i++)
    {
        if (visited.find(nums[i]) != visited.end())
            continue;
        visited[nums[i]] = true;
        swap(nums[index], nums[i]);
        solve(nums, ans, index + 1);
        swap(nums[index], nums[i]);
    }
}
vector<vector<int>> permuteUnique(vector<int> &nums)
{
    vector<vector<int>> ans;
    solve(nums, ans, 0);
    return ans;
}
int main()
{
}