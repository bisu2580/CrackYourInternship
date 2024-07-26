#include <bits/stdc++.h>
using namespace std;
void printDuplicates(string ans)
{
    // Approach 1
    // sort(ans.begin(), ans.end());
    // int n = ans.size();
    // for (int i = 0; i < n; i++)
    // {
    //     int count = 1;
    //     while (i < n - 1 && ans[i] == ans[i + 1])
    //     {
    //         i++;
    //         count++;
    //     }
    //     if (count > 1)
    //     {
    //         cout << ans[i] << "->" << count << endl;
    //     }
    // }
    // Approach 2
    unordered_map<char, int> mp;
    for (int i = 0; i < ans.size(); i++)
    {
        mp[ans[i]]++;
    }
    for (auto i : mp)
    {
        if (i.second > 1)
        {
            cout << i.first << "->" << i.second << endl;
        }
    }
}
int main()
{
    string s = "geeksforgeeks";
    printDuplicates(s);
}