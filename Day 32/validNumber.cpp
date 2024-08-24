#include <bits/stdc++.h>
using namespace std;
bool isNumber(string s)
{
    bool digitVisited = false;
    bool eVisited = false;
    bool dotVisited = false;
    int countPlusMinus = 0;
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        if (isdigit(ch))
            digitVisited = true;

        else if (ch == '+' || ch == '-')
        {
            if (countPlusMinus == 2)
                return false;
            if (i > 0 && (s[i - 1] != 'e' && s[i - 1] != 'E'))
                return false;
            if (i == s.size() - 1)
                return false;
            countPlusMinus++;
        }
        else if (ch == '.')
        {
            if (eVisited || dotVisited)
                return false;
            if (i == s.size() - 1 && !digitVisited)
                return false;
            dotVisited = true;
        }
        else if (ch == 'e' || ch == 'E')
        {
            if (eVisited || !digitVisited || i == s.size() - 1)
                return false;
            eVisited = true;
        }
        else
            return false;
    }
    return true;
}
int main()
{
}