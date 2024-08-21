#include <bits/stdc++.h>
using namespace std;
string ones[20] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
string tens[10] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
string two_digit(int n)
{
    if (n < 20)
        return ones[n];
    int tensDig = n / 10;
    int onesDig = n % 10;
    return tens[tensDig] + (onesDig == 0 ? "" : " " + ones[onesDig]);
}
string three_digit(int n)
{
    if (n == 0)
        return "";
    if (n < 100)
        return two_digit(n);
    return ones[n / 100] + " Hundred" + (n % 100 == 0 ? "" : " " + two_digit(n % 100));
}
string numberToWords(int num)
{
    if (num == 0)
        return "Zero";
    int billion = num / 1000000000;
    int million = (num / 1000000) % 1000;
    int thousand = (num / 1000) % 1000;
    int hundred = num % 1000;
    string ans = "";
    if (billion)
        ans += three_digit(billion) + " Billion";
    if (million)
        ans += (ans.empty() ? "" : " ") + three_digit(million) + " Million";
    if (thousand)
        ans += (ans.empty() ? "" : " ") + three_digit(thousand) + " Thousand";
    if (hundred)
        ans += (ans.empty() ? "" : " ") + three_digit(hundred);
    return ans;
}
int main()
{
}