#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &coins, int target)
{
    if (target == 0)
    {
        return 0;
    }
    if (target < 0)
        return INT_MAX;
    int mini = INT_MAX;
    for (int i = 0; i < coins.size(); i++)
    {
        int ans = solve(coins, target - coins[i]);
        if (ans != INT_MAX)
            mini = min(mini, ans + 1);
    }
    return mini;
}
int topDownSol(vector<int> &coins, int amount, vector<int> &dp)
{
    if (amount == 0)
    {
        return 0;
    }
    if (amount < 0)
    {
        return INT_MAX;
    }
    if (dp[amount] != -1)
        return dp[amount];
    int mini = INT_MAX;
    for (int i = 0; i < coins.size(); i++)
    {
        int ans = topDownSol(coins, amount - coins[i], dp);
        if (ans != INT_MAX)
        {
            mini = min(mini, ans + 1);
        }
    }
    return dp[amount] = mini;
}

int coinChange(vector<int> &coins, int amount)
{
    vector<int> dp(amount + 1, -1);
    int ans = topDownSol(coins, amount, dp);
    if (ans == INT_MAX)
        return -1;
    // int ans=tabulation(coins,amount);
    // if(ans==INT_MAX) return -1;
    return ans;
}
int main()
{
}