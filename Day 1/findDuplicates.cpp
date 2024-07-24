#include <bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &nums)
{
    // Approach 1 (T.C- nlogn, S.C- O(1))
    //      int n=nums.size();
    //      sort(nums.begin(),nums.end());
    //      for(int i=0;i<n-1;i++){
    //          if(nums[i]==nums[i+1]) return nums[i];
    //      }
    //      return -1;

    // Approach 2(T.C- O(n) S.C- O(1))
    //  int ans=-1;
    //  for(int i=0;i<nums.size();i++){
    //      int index=abs(nums[i]);
    //      if(nums[index]<0) return index;
    //      nums[index]*=-1;
    //  }
    //  return ans;

    // Approach 3 (T.C- O(n), S.C- O(1))
    int slow = 0, fast = 0;
    slow = nums[slow];
    fast = nums[nums[fast]];
    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    }
    slow = 0;
    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}
int main()
{
    vector<int> nums = {1, 4, 3, 2, 2};
    cout << findDuplicate(nums);
}