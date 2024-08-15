#include <bits/stdc++.h>
using namespace std;
bool isPossible(int arr[], int books, int students, int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < books; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > students || arr[i] > mid)
                return false;
            pageSum = arr[i];
        }
    }
    return true;
}
long long findPages(int books, int arr[], int students)
{
    if (books < students)
        return -1;
    long long sum = 0;
    int mini = 0;
    for (int i = 0; i < books; i++)
    {
        sum += arr[i];
    }
    long long start = mini;
    long long end = sum;
    long long ans = -1;
    while (start <= end)
    {
        long long mid = start + (end - start) / 2;
        if (!isPossible(arr, books, students, mid))
            start = mid + 1;
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
}