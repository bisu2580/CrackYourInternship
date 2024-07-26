#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    // Approach 1
    //  for(int i=0;i<nums.size()-1;i++){
    //      for(int j=i+1;j<nums.size();j++){
    //          if(nums[i]+nums[j]==target) return {i,j};
    //      }
    //  }
    //  return {-1,-1};
    // Approach 2
    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        int number = nums[i];
        int diff = target - number;
        if (mp.count(diff))
            return {mp[diff], i};
        mp[number] = i;
    }
    return {-1, -1};
}