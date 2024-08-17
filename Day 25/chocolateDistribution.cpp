#include <bits/stdc++.h>
using namespace std;
long long findMinDiff(vector<long long> a, long long n, long long m)
{
    sort(a.begin(), a.end());
    long long ans = INT_MAX;
    for (int i = 0; i < n - m + 1; i++)
    {
        int j = i + m - 1;
        if (ans > a[j] - a[i])
        {
            ans = a[j] - a[i];
        }
    }
    return ans;
}
int main()
{
}