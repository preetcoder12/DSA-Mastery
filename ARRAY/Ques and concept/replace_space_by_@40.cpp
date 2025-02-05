#include <bits/stdc++.h>

using namespace std;

string replace(string &r, int n)
{
    string s = "";
    for (int i = 0; i < n; i++)
    {
        if (r[i] == ' ')
        {
            s.push_back('@');
            s.push_back('4');
            s.push_back('0');
        }
        else
        {
            s.push_back(r[i]);
        }
    }
    return s;
}

int main()
{
    string s;
    getline(cin,s);       // Use getline to capture entire input including spaces

    cout << "the ans will be : " << replace(s, s.size());
}