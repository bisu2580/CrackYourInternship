#include <bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &prices)
{
    int minTillNow = prices[0];
    int maxProfit = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        minTillNow = min(minTillNow, prices[i]);
        int profit = abs(prices[i] - minTillNow);
        maxProfit = max(maxProfit, profit);
    }
    return maxProfit;
}
int main()
{
    vector<int> input = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(input) << endl;
}