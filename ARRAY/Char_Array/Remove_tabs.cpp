#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "my name is                            preet";
    auto new_end = unique(str.begin(), str.end(), [](char a, char b)
    { 
        return a == ' ' && b == ' '; 
    });
    str.erase(new_end, str.end());
    cout << str << endl;
    return 0;
}