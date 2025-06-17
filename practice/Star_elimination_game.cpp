#include <bits/stdc++.h>
using namespace std;

string nostar(string s)
{
    string ans = "";
    for (char ch : s)
    {
        if (ch == '*')
        {
            if (!ans.empty())
            {
                ans.pop_back();
            }
        }
        else
        {
            ans.push_back(ch);
        }
    }
    return ans;
}

int main()
{
    string s = "dsa****djfds**a";
    string ans = nostar(s);
    cout << ans << endl;
}