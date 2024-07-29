#include <bits/stdc++.h>
using namespace std;
void solve(vector<string> &ans, int open, int close, int n, string temp)
{
    if (open == n && close == n)
    {
        ans.push_back(temp);
        return;
    }
    if (open < n)
    {
        solve(ans, open + 1, close, n, temp + '(');
    }
    if (close < open)
    {
        solve(ans, open, close + 1, n, temp + ')');
    }
}
vector<string> generateParenthesis(int n)
{
    int open = 0;
    int close = 0;
    int index = 0;
    vector<string> ans;
    solve(ans, open, close, n, "");
    return ans;
}
int main()
{
}