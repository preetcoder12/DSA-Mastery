#include <bits/stdc++.h>
using namespace std;

string remove_substring(string s, int n, string part)
{
    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part),part.length());
    }
    return s;
}

int main()
{
    string s;
    getline(cin,s);
    cout<<remove_substring(s,s.length() ,"ghost")<<endl;
}