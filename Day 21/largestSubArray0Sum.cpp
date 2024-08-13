#include <bits/stdc++.h>
using namespace std;
int maxLen(vector<int> &arr, int n)
{
    int maxi = 0;
    unordered_map<int, int> mp;
    int sum = 0;
    mp[0] = -1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (mp.find(sum) != mp.end())
        {
            maxi = max(maxi, i - mp[sum]);
        }
        else
            mp[sum] = i;
    }
    return maxi;
}
int main()
{
}