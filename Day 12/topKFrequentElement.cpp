#include <bits/stdc++.h>
using namespace std;
struct cmp1
{
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second;
    }
};
vector<int> topKFrequent(vector<int> &nums, int k)
{
    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp1> pq;
    for (auto i : mp)
    {
        pq.push(i);
        if (pq.size() > k)
            pq.pop();
    }
    vector<int> ans;
    while (!pq.empty())
    {
        ans.push_back(pq.top().first);
        pq.pop();
    }
    return ans;
}

int main()
{
}