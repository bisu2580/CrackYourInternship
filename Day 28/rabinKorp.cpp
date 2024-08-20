#include <bits/stdc++.h>
using namespace std;
int d = 256;
int mod = 101;
vector<int> search(string pattern, string text)
{
    int n = text.length();
    int m = pattern.length();
    vector<int> ans;

    if (m > n)
        return ans;

    int d = 26;
    int mod = 1000000007;

    long long h = 1;
    for (int i = 0; i < m - 1; i++)
        h = (h * d) % mod;

    long long p = 0, t = 0;
    for (int i = 0; i < m; i++)
    {
        p = (p * d + (pattern[i] - 'a')) % mod;
        t = (t * d + (text[i] - 'a')) % mod;
    }

    for (int i = 0; i <= n - m; i++)
    {
        if (p == t)
        {
            bool flag = true;
            for (int j = 0; j < m; j++)
            {
                if (text[i + j] != pattern[j])
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                ans.push_back(i + 1);
        }

        if (i < n - m)
        {
            t = (d * (t - (text[i] - 'a') * h) + (text[i + m] - 'a')) % mod;
            if (t < 0)
                t = (t + mod);
        }
    }

    return ans;
}
int main()
{
}