#include <bits/stdc++.h>
using namespace std;
int subarraySum(vector<int> &nums, int k)
{
    // Approach 1((O(n^3)))
    //  int count=0;
    //  int n=nums.size();
    //  for(int i=0;i<n;i++){
    //      for(int j=i;j<n;j++){
    //          int sum=0;
    //          for(int l=i;l<=j;l++){
    //              sum+=nums[l];
    //          }
    //          if(sum==k) count++;
    //      }
    //  }
    //  return count;

    // Approach 2(O(n^2))
    //  int count=0;
    //  int n=nums.size();
    //  for(int i=0;i<n;i++){
    //      int sum=0;
    //      for(int j=i;j<n;j++){
    //          sum+=nums[j];
    //          if(sum==k) count++;
    //      }
    //  }
    //  return count;

    // Approach 3(T.C-O(n), S.C-O(n))
    unordered_map<int, int> mp;
    mp[0] = 1;
    int prefixSum = 0, count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        prefixSum += nums[i];
        int remaining = prefixSum - k;
        count += mp[remaining];
        mp[prefixSum] += 1;
    }
    return count;
}
int main()
{
}