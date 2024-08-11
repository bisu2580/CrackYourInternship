#include <bits/stdc++.h>
using namespace std;
int celebrity(vector<vector<int>> &mat)
{
    // Approach 1
    // int n=mat.size();
    // vector<int> knowMe(n,0);
    // vector<int> iKnow(n,0);
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(mat[i][j]==1){
    //             knowMe[j]++;
    //             iKnow[i]++;
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     if(knowMe[i]==n-1 && iKnow[i]==0) return i;
    // }
    // return -1;

    // Approach 2
    int n = mat.size();
    int top = 0;
    int bottom = n - 1;
    while (top < bottom)
    {
        if (mat[top][bottom] == 1)
            top += 1;
        else if (mat[bottom][top] == 1)
            bottom -= 1;
        else
        {
            top++;
            bottom--;
        }
    }
    if (top > bottom)
        return -1;
    for (int i = 0; i < n; i++)
    {
        if (i == top)
            continue;
        if (mat[top][i] == 0 && mat[i][top] == 1)
            continue;
        else
            return -1;
    }
    return top;
}
int main()
{
}