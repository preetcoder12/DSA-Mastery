#include <bits/stdc++.h>
using namespace std;

string encode(string &message)
{
    int count = 1;
    string ans = "";
    for (int i = 1; i <= message.length(); i++)
    {
        if (i < message.length() && message[i] == message[i - 1])
        {
            count++;
        }
        else
        {
            ans +=  message[i - 1] + to_string(count) ;
            count = 1;
        }
    }
    return ans;
}

int main()
{
    string s = "aabbc";
    cout << encode(s) << endl;
}