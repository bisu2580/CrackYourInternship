#include <bits/stdc++.h>
using namespace std;
int high(vector<int> arr, int n, int x)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] < x)
            start = mid + 1;
        else
        {
            ans = arr[mid];
            end = mid - 1;
        }
    }
    return ans;
}
int low(vector<int> arr, int n, int x)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] > x)
            end = mid - 1;
        else
        {
            ans = arr[mid];
            start = mid + 1;
        }
    }
    return ans;
}
pair<int, int> getFloorAndCeil(vector<int> arr, int n, int x)
{
    int fl = low(arr, n, x);
    int ce = high(arr, n, x);
    return {fl, ce};
}
int main()
{
    vector<int> ans = {3, 4, 7, 8, 8, 10};
    int n = ans.size();
    int x = 8;
    pair<int, int> p = getFloorAndCeil(ans, n, x);
    cout << p.first << " " << p.second << endl;
}