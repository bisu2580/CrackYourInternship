#include <bits/stdc++.h>
using namespace std;
int countMid(vector<vector<int>> &matrix, int mid)
{
    int count = 0;
    int n = matrix.size();
    for (int i = 0; i < n; i++)
    {
        count += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
    }
    return count;
}
int kthSmallest(vector<vector<int>> &matrix, int k)
{
    // Approach 1
    //  priority_queue<int>pq;
    //  for(int i=0;i<matrix.size();i++){
    //      for(int j=0;j<matrix.size();j++){
    //          pq.push(matrix[i][j]);
    //          if(pq.size()>k) pq.pop();
    //      }
    //  }
    //  return pq.top();
    // Approach 2
    int n = matrix.size();
    int low = matrix[0][0];
    int high = matrix[n - 1][n - 1];
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (countMid(matrix, mid) < k)
            low = mid + 1;
        else
            high = mid;
    }
    return low;
}
int main()
{
}