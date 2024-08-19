#include <bits/stdc++.h>
using namespace std;
string reorganizeString(string s)
{
    int n = s.size();
    char ans[n];
    vector<int> hash(26, 0);
    for (int i = 0; i < s.size(); i++)
        hash[s[i] - 'a']++;
    int maxi = 0, letter = 0;
    for (int i = 0; i < hash.size(); i++)
    {
        if (hash[i] > maxi)
        {
            maxi = hash[i];
            letter = i;
        }
    }
    if (maxi > (s.size() + 1) / 2)
        return "";
    int index = 0;
    while (hash[letter]-- > 0)
    {
        ans[index] = letter + 'a';
        index += 2;
    }
    for (int i = 0; i < hash.size(); i++)
    {
        while (hash[i]-- > 0)
        {
            if (index >= n)
                index = 1;
            ans[index] = i + 'a';
            index += 2;
        }
    }
    string res;
    for (int i = 0; i < n; i++)
        res.push_back(ans[i]);
    return res;
}
int main()
{
}