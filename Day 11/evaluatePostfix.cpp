#include <bits/stdc++.h>
using namespace std;
bool isOperator(char ch)
{
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}
int operation(int a, int b, char ch)
{
    if (ch == '+')
        return a + b;
    if (ch == '-')
        return a - b;
    if (ch == '*')
        return a * b;
    if (ch == '/')
        return a / b;
    return 0;
}
int evaluatePostfix(string S)
{
    stack<int> st;
    for (int i = 0; i < S.size(); i++)
    {
        if (!isOperator(S[i]))
            st.push(S[i]);
        else
        {
            int first = st.top();
            st.pop();
            int second = st.top();
            st.pop();
            int ans = operation(second, first, S[i]);
            st.push(ans);
        }
    }
    return st.top();
}
int main()
{
    string s = "231*+9-";
    cout << evaluatePostfix(s);
}