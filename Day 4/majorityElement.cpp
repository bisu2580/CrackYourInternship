#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    // Approach 1
    //  unordered_map<int,int>mp;
    //  for(auto i:nums){
    //      mp[i]++;
    //  }
    //  for(auto j:mp){
    //      if(j.second>floor(n/2)) return j.first;
    //  }
    //  return -1;
    // Approach 2
    int count = 0;
    int element;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            count = 1;
            element = nums[i];
        }
        else if (nums[i] == element)
            count++;
        else
            count--;
    }
    return element;
}
int main()
{
}