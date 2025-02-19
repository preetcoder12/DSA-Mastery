#include <bits/stdc++.h>
using namespace std;

char kThCharaterOfDecryptedString(string s, long long k)
{
    long long length = 0;
    string curr = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (isalpha(s[i]))
        {
            curr += s[i];
        }
        else
        {
            long long num = 0;
            if (i < s.length() && isdigit(s[i]))
            {
                num = num * 10 + (s[i] - '0');
                i++;
            }
            long long newlength = length + (curr.length() * num);
            if (newlength >= k)
            {
                long long pos = (k - length - 1) % curr.length();
                return curr[pos];
            }
            length = newlength;
            curr = "";
            i--;
        }
    }
    return '-';
}

int main()
{
    string A = "a2b3cd3";
    long long k = 8;
    cout << kThCharaterOfDecryptedString(A, k) << endl;
    return 0;
}