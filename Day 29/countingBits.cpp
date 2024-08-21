#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
vector<int> countBits(int n)
{
    vector<int> ans;
    for (int i = 0; i <= n; i++)
    {
        ans.push_back(solve(i));
    }
    return ans;
}
int main(){
}