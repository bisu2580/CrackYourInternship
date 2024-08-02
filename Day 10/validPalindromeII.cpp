#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s, int left, int right)
{
    while (left <= right)
        if (s[left++] != s[right--])
            return false;
    return true;
}
bool validPalindrome(string s)
{
    int start = 0;
    int end = s.size() - 1;
    while (start <= end)
    {
        if (s[start] == s[end])
        {
            start++;
            end--;
        }
        else
        {
            return (isPalindrome(s, start + 1, end) || isPalindrome(s, start, end - 1));
        }
    }
    return true;
}
int main()
{
}