#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &arr, vector<vector<int>> &ans, vector<int> &temp,
           int index)
{
    ans.push_back(temp);
    for (int i = index; i < arr.size(); i++)
    {
        if (i != index && arr[i] == arr[i - 1])
            continue;
        temp.push_back(arr[i]);
        solve(arr, ans, temp, i + 1);
        temp.pop_back();
    }
}
vector<vector<int>> subsetsWithDup(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    vector<int> temp;
    int index = 0;
    solve(nums, ans, temp, index);
    return ans;
}
int main()
{
}