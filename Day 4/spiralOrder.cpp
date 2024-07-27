#include<bits/stdc++.h>
using namespace std;
vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();
    int total_elements = row * col;
    int count = 0;
    int topRow = 0;
    int leftCol = 0;
    int bottomRow = row - 1;
    int rightCol = col - 1;
    while (count < total_elements)
    {
        for (int i = leftCol; count < total_elements && i <= rightCol; i++)
        {
            ans.push_back(matrix[topRow][i]);
            count++;
        }
        topRow++;
        for (int i = topRow; count < total_elements && i <= bottomRow; i++)
        {
            ans.push_back(matrix[i][rightCol]);
            count++;
        }
        rightCol--;
        for (int i = rightCol; count < total_elements && i >= leftCol; i--)
        {
            ans.push_back(matrix[bottomRow][i]);
            count++;
        }
        bottomRow--;
        for (int i = bottomRow; count < total_elements && i >= topRow; i--)
        {
            ans.push_back(matrix[i][leftCol]);
            count++;
        }
        leftCol++;
    }
    return ans;
}
int main(){
}