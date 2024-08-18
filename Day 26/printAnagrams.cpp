#include<bits/stdc++.h>
using namespace std;
vector<vector<string>> Anagrams(vector<string> &str)
{
    unordered_map<string, vector<string>> mp;
    vector<vector<string>> ans;
    for (auto x : str)
    {
        string temp = x;
        sort(x.begin(), x.end());
        mp[x].push_back(temp);
    }
    for (auto x : mp)
    {
        ans.push_back(x.second);
    }
    sort(ans.begin(), ans.begin());
    return ans;
}
int main(){
}