#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    vector<vector<string>> ans;
    unordered_map<string, vector<string>> mp;
    for (auto x : strs)
    {
        string temp = x;
        sort(x.begin(), x.end());
        mp[x].push_back(temp);
    }
    for (auto i : mp)
    {
        ans.push_back(i.second);
    }
    return ans;
}
int main()
{
}