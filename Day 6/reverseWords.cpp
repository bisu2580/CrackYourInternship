#include <bits/stdc++.h>
using namespace std;
string reverseWords(string s)
{
    int index = 0;
    int endIndex = s.size() - 1;
    while (s[index] == ' ')
        index++;
    while (endIndex >= 0 && s[endIndex] == ' ')
        endIndex--;
    stack<string> st;
    string nums = "";
    while (index <= endIndex)
    {
        if (s[index] != ' ')
        {
            nums += s[index];
        }
        else
        {
            if (s[index + 1] != ' ')
            {
                st.push(nums);
                nums = "";
            }
        }
        index++;
    }
    while (index <= endIndex)
    {
        if (s[index] != ' ')
            nums += s[index];
        index++;
    }
    st.push(nums);
    nums.clear();
    int i = 0;
    while (!st.empty())
    {
        nums += st.top();
        if (st.size() > 1)
            nums += ' ';
        st.pop();
    }
    return nums;
}
int main()
{
}