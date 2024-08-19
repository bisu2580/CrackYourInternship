#include <bits/stdc++.h>
using namespace std;
int calculate(string s)
{
    if (s.size() == 0)
        return 0;
    int number = 0;
    char operation = '+';
    stack<int> st;
    for (int i = 0; i < s.size(); i++)
    {
        char curr = s[i];
        if (isdigit(curr))
        {
            number = (number * 10) + (curr - '0');
        }
        if (!isdigit(curr) && !iswspace(curr) || i == s.size() - 1)
        {
            if (operation == '-')
                st.push(-number);
            else if (operation == '+')
                st.push(number);
            else if (operation == '*')
            {
                int top = st.top();
                st.pop();
                st.push(top * number);
            }
            else if (operation == '/')
            {
                int top = st.top();
                st.pop();
                st.push(top / number);
            }
            operation = curr;
            number = 0;
        }
    }
    int result = 0;
    while (!st.empty())
    {
        result += st.top();
        st.pop();
    }
    return result;
}
int main()
{
}