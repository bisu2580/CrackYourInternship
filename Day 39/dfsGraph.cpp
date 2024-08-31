#include <bits/stdc++.h>
using namespace std;
void dfs(vector<int> adj[], int node, unordered_map<int, bool> &visited, vector<int> &ans)
{
    ans.push_back(node);
    visited[node] = true;
    for (auto it : adj[node])
    {
        if (!visited[it])
        {
            dfs(adj, it, visited, ans);
        }
    }
}
vector<int> dfsOfGraph(int V, vector<int> adj[])
{
    // Code here
    vector<int> ans;
    unordered_map<int, bool> visited;
    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {
            dfs(adj, i, visited, ans);
        }
    }
    return ans;
}
int main()
{
}