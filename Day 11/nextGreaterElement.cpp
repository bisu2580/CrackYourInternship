#include <bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    // approach 1
    //  map<int,int> mp;
    //  for(int i=0;i<nums2.size()-1;i++){
    //      for(int j=i+1;j<nums2.size();j++){
    //          if(nums2[j]>nums2[i]){
    //              mp[nums2[i]]=nums2[j];
    //              break;
    //          }
    //          else mp[nums2[i]]=-1;
    //      }
    //  }
    //  mp[nums2[nums2.size()-1]]=-1;
    //  vector<int>ans;
    //  for(int i=0;i<nums1.size();i++){
    //      ans.push_back(mp[nums1[i]]);
    //  }
    //  return ans;
    // Approach 2
    map<int, int> greater;
    stack<int> st;
    int n = nums2.size();
    for (auto i : nums2)
    {
        while (!st.empty() && st.top() < i)
        {
            greater[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    vector<int> ans;
    for (int i = 0; i < nums1.size(); i++)
    {
        if (greater.find(nums1[i]) != greater.end())
            ans.push_back(greater[nums1[i]]);
        else
            ans.push_back(-1);
    }
    return ans;
}
int main()
{
    vector<int> ans1 = {1, 4, 1};
    vector<int> ans2 = {1, 3, 4, 2};
    vector<int> ans;
    ans = nextGreaterElement(ans1, ans2);
    cout << "Next Greater Element for each element in the array is " << endl;
    for (auto i : ans)
    {
        cout << i << " ";
    }
}