#include <bits/stdc++.h>
using namespace std;
void bfs(map<pair<int, int>, bool> &visited, int row, int col, vector<vector<char>> &grid)
{
    queue<pair<int, int>> q;
    q.push({row, col});
    visited[{row, col}] = true;

    while (!q.empty())
    {
        pair<int, int> node = q.front();
        q.pop();
        int x = node.first;
        int y = node.second;
        // Move 4 directions
        int dx[] = {-1, 0, 1, 0};
        int dy[] = {0, 1, 0, -1};

        for (int i = 0; i < 4; i++)
        {
            int newX = x + dx[i];
            int newY = y + dy[i];

            if (newX >= 0 && newX < grid.size() && newY >= 0 && newY < grid[0].size() &&
                !visited[{newX, newY}] && grid[newX][newY] == '1')
            {
                q.push({newX, newY});
                visited[{newX, newY}] = true;
            }
        }
    }
}
int numIslands(vector<vector<char>> &grid)
{
    map<pair<int, int>, bool> visited;
    int count = 0;
    for (int row = 0; row < grid.size(); row++)
    {
        int n = grid[row].size();
        for (int col = 0; col < n; col++)
        {
            if (!visited[{row, col}] && grid[row][col] == '1')
            {
                bfs(visited, row, col, grid);
                count++;
            }
        }
    }
    return count;
}
int main()
{
}