#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> &nums, vector<vector<int>> &ans, vector<int> &temp, int ind)
{
    if (ind >= nums.size())
    {
        ans.push_back(temp);
        return;
    }
    temp.push_back(nums[ind]);
    solve(nums, ans, temp, ind + 1);
    temp.pop_back();
    solve(nums, ans, temp, ind + 1);
}
vector<vector<int>> subsets(vector<int> &nums)
{
    vector<int> temp;
    vector<vector<int>> ans;
    int index = 0;
    solve(nums, ans, temp, index);
    return ans;
}
int main(){
}