#include <bits/stdc++.h>
using namespace std;
vector<int> findDuplicates(vector<int> &nums)
{
    // Approach 1
    /*
    vector<int>ans;
    unordered_map<int,int>mp;
    for(auto i:nums){
        mp[i]++;
    }
    for(auto j:mp){
        if(j.second==2) ans.push_back(j.first);
    }
    return ans;
    */
    // Approach 2
    //  vector<int>ans;
    //  sort(nums.begin(),nums.end());
    //  int count=1;
    //  for(int i=0;i<nums.size()-1;i++){
    //      if(nums[i]==nums[i+1]) count++;
    //      if(count==2){
    //          ans.push_back(nums[i]);
    //          count=1;
    //      }
    //  }
    //  return ans;
    // Approach 3
    vector<int> ans;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int indexToCheck = abs(nums[i]) - 1;

        if (nums[indexToCheck] < 0)
            ans.push_back(indexToCheck + 1);
        nums[indexToCheck] *= -1;
    }
    return ans;
}
int main()
{
}