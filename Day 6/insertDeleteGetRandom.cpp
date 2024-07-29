#include <bits/stdc++.h>
using namespace std;
class RandomizedCollection
{
private:
    vector<pair<int, int>> nums;
    unordered_map<int, vector<int>> mp;

public:
    RandomizedCollection()
    {
    }

    bool insert(int val)
    {
        bool not_present = mp.find(val) == mp.end();
        mp[val].push_back(nums.size());
        nums.push_back(make_pair(val, mp[val].size() - 1));
        return not_present;
    }

    bool remove(int val)
    {
        if (mp.find(val) == mp.end())
            return false;
        int curr_size = nums.size();
        auto last = nums.back();
        mp[last.first][last.second] = mp[val].back();
        nums[mp[val].back()] = last;
        mp[val].pop_back();
        if (mp[val].empty())
            mp.erase(val);
        nums.pop_back();
        return true;
    }

    int getRandom()
    {
        int curr_size = nums.size();
        return nums[rand() % curr_size].first;
    }
};
int main()
{
}