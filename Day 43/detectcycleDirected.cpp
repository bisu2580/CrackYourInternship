#include <bits/stdc++.h>
using namespace std;
bool dfs(int vis[], int pathVis[], int node, vector<int> adj[])
{
    vis[node] = 1;
    pathVis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            if (dfs(vis, pathVis, it, adj) == true)
            {
                return true;
            }
        }
        else if (pathVis[it] == 1)
        {
            return true;
        }
    }
    pathVis[node] = 0;
    return false;
}
bool isCyclic(int V, vector<int> adj[])
{
    int vis[V] = {0};
    int pathVis[V] = {0};
    for (int i = 0; i <= V - 1; i++)
    {
        if (!vis[i])
        {
            if (dfs(vis, pathVis, i, adj) == true)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
}