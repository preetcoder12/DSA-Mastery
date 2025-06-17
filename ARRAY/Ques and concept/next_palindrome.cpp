#include <bits/stdc++.h>
using namespace std;

bool palindrome(string s, int length)
{

    int start = 0;
    int end = length - 1;
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

string nextLargestPalindrome(string s, int length)
{

    if (palindrome(s, s.length()))
    {
        int num = stoi(s);
        num += 1;
        s = to_string(num);
        length = s.length();
    }
    int mid = length / 2;
    int start = 0;
    int end = length - 1;

    while (start < mid)
    {
        s[end - start] = s[start];
        start++;
    }
    if (stoi(s) <= stoi(s))
    {
        if (length % 2 == 0)
        {
            s[mid - 1]++;
        }
        else
        {
            s[mid]++;
        }
    }

    start = 0;
    end = length - 1;
    while (start < mid)
    {
        s[end - start] = s[start];
        start++;
    }

    return s;
}

int main()
{
    string s = "1221";
    cout << nextLargestPalindrome(s, s.length()) << endl;
}