#include <bits/stdc++.h>
using namespace std;
void sortColors(vector<int> &nums)
{
    // Approach 1
    //  int zero=0,one=0,two=0;
    //  for(auto i:nums){
    //      if(i==0) zero++;
    //      else if(i==1) one++;
    //      else two++;
    //  }
    //  int index=0;
    //  while(zero--){
    //      nums[index++]=0;
    //  }
    //  while(one--){
    //      nums[index++]=1;
    //  }
    //  while(two--){
    //      nums[index++]=2;
    //  }

    // Approach 2
    int n = nums.size();
    int left = 0;
    int mid = 0;
    int right = n - 1;
    while (mid <= right)
    {
        if (nums[mid] == 0)
            swap(nums[mid++], nums[left++]);
        else if (nums[mid] == 1)
            mid++;
        else
            swap(nums[mid], nums[right--]);
    }
}