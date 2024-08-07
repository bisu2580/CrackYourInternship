#include<bits/stdc++.h>
using namespace std;
bool palindrome(string s, int start, int end)
{
    while (start <= end)
    {
        if (s[start++] != s[end--])
            return false;
    }
    return true;
}
void solve(string &s, int index, vector<string> &temp, vector<vector<string>> &ans)
{
    if (index == s.size())
    {
        ans.push_back(temp);
        return;
    }
    for (int i = index; i < s.size(); i++)
    {
        if (palindrome(s, index, i))
        {
            temp.push_back(s.substr(index, i - index + 1));
            solve(s, i + 1, temp, ans);
            temp.pop_back();
        }
    }
}
vector<vector<string>> partition(string s)
{
    vector<string> temp;
    int index = 0;
    vector<vector<string>> ans;
    solve(s, index, temp, ans);
    return ans;
}
int main(){
}