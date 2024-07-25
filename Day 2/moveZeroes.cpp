#include <bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int> &nums)
{
    // Approach 1
    //  int index=0;
    //  for(int i=0;i<nums.size();i++){
    //      if(nums[i]!=0) nums[index++]=nums[i];
    //  }
    //  for(int i=index;i<nums.size();i++){
    //      nums[i]=0;
    //  }

    // Approach 2
    int start = 0;
    for (int end = 0; end < nums.size(); end++)
    {
        if (nums[end] != 0)
        {
            swap(nums[end], nums[start]);
            start++;
        }
    }
}