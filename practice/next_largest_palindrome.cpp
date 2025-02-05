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

// Function to find the next largest palindrome
string nextLargestPalindrome(string s, int length)
{
    long long num = stoll(s); // Convert string to long long

    while (true)
    {
        num++; // Increment number
        string strNum = to_string(num);
        if (checkPalindrome(strNum))
        {
            return strNum; // Return the next palindrome
        }
    }
}

int main()
{
    string s = "123";
    int l = s.length();
    cout << "Next largest palindrome: " << nextLargestPalindrome(s, l) << endl;
    return 0;
}
