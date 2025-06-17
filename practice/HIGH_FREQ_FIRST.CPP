#include <bits/stdc++.h>
using namespace std;

string sortfreq(string s)
{
    unordered_map<char, int> freq;
    for (char ch : s)
    {
        freq[ch]++;
    }
    vector<pair<char, int>> chars(freq.begin(), freq.end());

    sort(chars.begin(), chars.end(), [](auto &a, auto &b)

         {
        if (a.second != b.second)
        {
            return a.second > b.second;
        }
        return a.first < b.first; });

    string ans = "";
    for (auto &ch : chars)
    {
        ans += string(ch.second, ch.first);
    }
    return ans;
}

int main()
{
    string s = "bbaaac";
    cout << sortfreq(s) << endl;
    return 0;
}