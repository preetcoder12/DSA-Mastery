#include <bits/stdc++.h>
using namespace std;

string ans(string s)
{
    int n = s.size();
    int i = 0;
    int j = n - 1;
    string s2 = s;

    while (i < j)
    {
        while (i < j && !isalpha(s[i]))
        {
            i++;
        }
        while (i < j && !isalpha(s[j]))
        {
            j--;
        }

        if (i < j)
        {
            s2[i] = s[j];
            s2[j] = s[i];
            i++;
            j--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << s2[i] << "";
    }
    cout << endl;
}

int main()
{
    string s = "Test1ng-Leet=code-Q!";
    string s2 = "";
    ans(s);

    return 0;
}