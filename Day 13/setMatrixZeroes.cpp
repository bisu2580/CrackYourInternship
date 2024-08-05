#include <bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int>> &matrix)
{
    bool firstRow = false;
    bool firstCol = false;
    int m = matrix.size();
    int n = matrix[0].size();
    // 1st row and 1st col
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                if (i == 0)
                    firstRow = true;
                if (j == 0)
                    firstCol = true;
                matrix[0][j] = 0;
                matrix[i][0] = 0;
            }
        }
    }
    // replace inner matrix
    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0;
        }
    }
    // remaining 1st row and 1st col
    if (firstRow)
        for (int j = 0; j < n; j++)
            matrix[0][j] = 0;
    if (firstCol)
        for (int i = 0; i < m; i++)
            matrix[i][0] = 0;
}
int main()
{
}