#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &prices, int buy, int index)
{
    if (index == prices.size())
    {
        return 0;
    }
    int profit = 0;
    if (buy)
    {
        int take = -prices[index] + solve(prices, 0, index + 1);
        int notTake = 0 + solve(prices, 1, index + 1);
        profit = max(take, notTake);
    }
    else
    {
        int take = prices[index] + solve(prices, 1, index + 1);
        int notTake = 0 + solve(prices, 0, index + 1);
        profit = max(take, notTake);
    }
    return profit;
}
int memo(vector<int> &prices, int buy, int index, vector<vector<int>> &dp)
{
    if (index == prices.size())
    {
        return 0;
    }
    if (dp[index][buy] != -1)
        return dp[index][buy];
    int profit = 0;
    if (buy)
    {
        int take = -prices[index] + memo(prices, 0, index + 1, dp);
        int notTake = 0 + memo(prices, 1, index + 1, dp);
        profit = max(take, notTake);
    }
    else
    {
        int take = prices[index] + memo(prices, 1, index + 1, dp);
        int notTake = 0 + memo(prices, 0, index + 1, dp);
        profit = max(take, notTake);
    }
    return dp[index][buy] = profit;
}
int tabulation(vector<int> &prices)
{
    int n = prices.size();
    vector<vector<int>> dp(n + 1, vector<int>(2, 0));
    dp[n][0] = dp[n][1] = 0;
    for (int index = n - 1; index >= 0; index--)
    {
        for (int buy = 0; buy <= 1; buy++)
        {
            int profit = 0;
            if (buy)
            {
                int take = -prices[index] + dp[index + 1][0];
                int notTake = dp[index + 1][1];
                profit = max(take, notTake);
            }
            else
            {
                int take = prices[index] + dp[index + 1][1];
                int notTake = dp[index + 1][0];
                profit = max(take, notTake);
            }
            dp[index][buy] = profit;
        }
    }
    return dp[0][1];
}
int maxProfit(vector<int> &prices)
{
    int index = 0;
    int buy = 1;
    int n = prices.size();
    // return solve(prices,buy,index);
    vector<vector<int>> dp(n + 1, vector<int>(2, -1));
    // return memo(prices,1,0,dp);
    return tabulation(prices);
}
int main()
{
}