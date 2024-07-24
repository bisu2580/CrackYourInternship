#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &nums)
{
    // Approach 1 (T.C- nlogn S.C- O(n))
    //  set<int>ans;
    //  for(auto i:nums){
    //      ans.insert(i);
    //  }
    //  int index=0;
    //  for(auto k:ans){
    //      nums[index++]=k;
    //  }
    //  return index;

    // Approach 2: 2 pointer (T.C- O(n), S.C- O(1))
    int index = 1;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] != nums[i + 1])
        {
            nums[index] = nums[i + 1];
            index++;
        }
    }
    return index;
}
int main()
{
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int n = removeDuplicates(nums);
    cout << n << endl;
}