#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s)
{
    int start = 0, end = s.length() - 1;
    while (start < end)
    {
        if (s[start] != s[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

string nextLargestPalindrome(string s)
{
    long long num = stoll(s);
    while (true)
    {
        num++;
        string strNum = to_string(num);
        if (checkPalindrome(strNum))
        {
            return strNum;
        }
    }
}

string findSmallerPalindrome(string s)
{
    long long num = stoll(s);

    if (num <= 1)
    {
        return "0";
    }

    while (num > 0)
    {
        num--;
        string strNum = to_string(num);
        if (checkPalindrome(strNum))
        {
            return strNum;
        }
    }

    return " ";
}

string nearestPalindromic(string s)
{
    string prevPal = findSmallerPalindrome(s);
    string nextPal = nextLargestPalindrome(s);

    if (prevPal == " ")
    {
        return nextPal;
    }

    long long num = stoll(s);
    long long nextDiff = abs(stoll(nextPal) - num);
    long long prevDiff = abs(stoll(prevPal) - num);

    if (nextDiff == prevDiff)
    {
        return prevPal;
    }

    if (nextDiff < prevDiff)
    {
        return nextPal;
    }
    else
    {
        return prevPal;
    }
}
int main()
{
    string s = "123";
    cout << "Closest palindrome: " << nearestPalindromic(s) << endl;
    return 0;
}
