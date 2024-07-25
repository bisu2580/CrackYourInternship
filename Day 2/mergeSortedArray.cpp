#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    // Method 1 (T.C- O((m+n)log(m+n)) S.C- O(1))
    /*  nums1.resize(m);
        nums2.resize(n);
        for(auto number:nums2) nums1.push_back(number);
        sort(nums1.begin(),nums1.end());
    */

    // Approach 2-(T.C- O(n) S.C- O(m+n))
    nums1.resize(m);
    nums2.resize(n);
    int i = 0, j = 0, k = 0;
    vector<int> temp(m + n);
    while (i < m && j < n)
    {
        if (nums1[i] <= nums2[j])
            temp[k++] = nums1[i++];
        else
            temp[k++] = nums2[j++];
    }
    while (i < m)
        temp[k++] = nums1[i++];
    while (j < n)
        temp[k++] = nums2[j++];
    nums1 = temp;
}
int main()
{
}