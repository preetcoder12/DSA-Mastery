#include <bits/stdc++.h>
using namespace std;

int makeBeautiful(string str)
{
    int p1 = 0;
    int p2 = 0;
    for (int i = 0; i < str.length(); i++)
    {
        char expectedp1 = (i % 2 == 0) ? '0' : '1';
        char expectedp2 = (i % 2 == 0) ? '1' : '0';

        if (str[i] != expectedp1)
        {
            p1++;
        }
        if (str[i] != expectedp2)
        {
            p2++;
        }
    }
    return min(p1, p2);
}

int main()
{
    string s = "0010";
    cout << makeBeautiful(s) << endl;
}