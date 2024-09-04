#include <bits/stdc++.h>
using namespace std;
void solve(int i, int j, vector<vector<int>> &a, int n, vector<string> &ans, string move, vector<vector<int>> &vis,
           int di[], int dj[])
{
    if (i == n - 1 && j == n - 1)
    {
        ans.push_back(move);
        return;
    }
    string dir = "DLRU";
    for (int index = 0; index < 4; index++)
    {
        int nxti = i + di[index];
        int nxtj = j + dj[index];
        if (nxti >= 0 && nxtj >= 0 && nxti < n && nxtj < n && !vis[nxti][nxtj] && a[nxti][nxtj] == 1)
        {
            vis[i][j] = 1;
            solve(nxti, nxtj, a, n, ans, move + dir[index], vis, di, dj);
            vis[i][j] = 0;
        }
    }
}
vector<string> findPath(vector<vector<int>> &m)
{
    vector<string> ans;
    int n = m.size();
    vector<vector<int>> vis(n, vector<int>(n, 0));
    int di[] = {+1, 0, 0, -1};
    int dj[] = {0, -1, 1, 0};
    if (m[0][0] == 1)
        solve(0, 0, m, n, ans, "", vis, di, dj);
    return ans;
}
int main()
{
}